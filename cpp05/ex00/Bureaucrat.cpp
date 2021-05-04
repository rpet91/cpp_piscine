/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:42:18 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/04 13:08:18 by rpet          ########   odam.nl         */
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

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_name = src._name;
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
	this->_grade--;
}

void				Bureaucrat::decrementGrade()
{
	this->_grade++;
}

Bureaucrat::GradeTooHighException()
{
	std::cout << "test high" << std::endl;
}

Bureaucrat::GradeTooLowException()
{
	std::cout << "test low" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade "
		<< src.getGrade() << "." << std::endl;
	return (out);
}
