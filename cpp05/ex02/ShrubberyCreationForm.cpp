/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:30:42 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:28:59 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("Shrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	Form("Shrubbery Creation Form", 145, 137), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	Form::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
