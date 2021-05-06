/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:25:00 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 13:18:25 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <cstdbool>

#include <iostream>

Form::Form() : _signGrade(0), _execGrade(0)
{
}

Form::Form(std::string const &name, int const signGrade, int const execGrade) :
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade <= 0 || execGrade <= 0)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src) :
	_name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

Form	&Form::operator=(Form const &src)
{
	this->_signed = src._signed;
	return (*this);
}

Form::~Form()
{
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

int					Form::getSignGrade() const
{
	return (this->_signGrade);
}

int					Form::getExecGrade() const
{
	return (this->_execGrade);
}

void				Form::beSigned(Bureaucrat const &src)
{
	if (this->_signGrade >= src.getGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char			*Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high!");
}

const char			*Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low!");
}

std::ostream		&operator<<(std::ostream &os, Form const &src)
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
