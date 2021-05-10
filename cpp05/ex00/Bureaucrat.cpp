/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:42:18 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 13:36:55 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(getName())
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_grade = src._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void				Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade "
		<< src.getGrade() << "." << std::endl;
	return (out);
}
