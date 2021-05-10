/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:25:00 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/07 10:51:00 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <cstdbool>

#include <iostream>

AForm::AForm() : _signGrade(0), _execGrade(0)
{
}

AForm::AForm(std::string const &name, int const signGrade, int const execGrade) :
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade <= 0 || execGrade <= 0)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &src) :
	_name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

AForm	&AForm::operator=(AForm const &src)
{
	this->_signed = src._signed;
	return (*this);
}

AForm::~AForm()
{
}

std::string const	AForm::getName() const
{
	return (this->_name);
}

bool				AForm::getSigned() const
{
	return (this->_signed);
}

int					AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int					AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void				AForm::beSigned(Bureaucrat const &src)
{
	if (this->_signed == true)
		throw AlreadySignedException();
	if (this->_signGrade >= src.getGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void				AForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw NotSignedException();
	if (this->_execGrade < executor.getGrade())
		throw GradeTooLowException();
	this->_performAction();
}

const char			*AForm::GradeTooHighException::what() const throw()
{
	return ("the grade is too high!");
}

const char			*AForm::GradeTooLowException::what() const throw()
{
	return ("the grade is too low!");
}

const char			*AForm::NotSignedException::what() const throw()
{
	return ("the form is not signed yet!");
}

const char			*AForm::AlreadySignedException::what() const throw()
{
	return ("the form has already been signed!");
}

std::ostream		&operator<<(std::ostream &os, AForm const &src)
{
	std::string		signedForm;

	if (src.getSigned())
		signedForm = " has been signed. ";
	else
		signedForm = " has not been signed. ";
	os << "The form \"" << src.getName() << "\"" << signedForm <<
		"With a sign grade of " << src.getSignGrade() <<
		" and an execute grade of " << src.getExecGrade() << "." << std::endl;
	return (os);
}
