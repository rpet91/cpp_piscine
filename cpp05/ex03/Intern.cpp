/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:02:29 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 09:03:08 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern	&Intern::operator=(Intern const &src)
{
	(void) src;
	return (*this);
}

Intern::~Intern()
{
}

AForm		*Intern::makeForm(std::string const &name, std::string const &target) const
{
	std::string		formNames[] =
	{"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	typedef AForm	*(Intern::*formFunctions)(std::string const &target) const;
	formFunctions	functionNames[] =
	{&Intern::callShrubberyCreationForm,
		&Intern::callRobotomyRequestForm,
		&Intern::callPresidentialPardonForm};

	for (int i = 0; i < (int)(sizeof(formNames) / sizeof(std::string)); i++)
	{
		if (formNames[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*functionNames[i])(target));
		}
	}
	std::cout << name << " is not a valid form name!" << std::endl;
	return (0);
}

AForm	*Intern::callShrubberyCreationForm(std::string const &target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::callRobotomyRequestForm(std::string const &target) const
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::callPresidentialPardonForm(std::string const &target) const
{
	return (new PresidentialPardonForm(target));
}
