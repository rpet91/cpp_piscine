/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:33:28 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:48:49 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <string>

PresidentialPardonForm::PresidentialPardonForm() :
	Form("Presidential Pardon Form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("Presidential Pardon Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
	Form("Presidential Pardon Form", 25, 5), _target(src._target)
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	Form::operator=(src);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
