/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:33:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:43:14 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <string>

RobotomyRequestForm::RobotomyRequestForm() :
	Form("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
	Form("Robotomy Request Form", 72, 45), _target(src._target)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	Form::operator=(src);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
