/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:33:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/07 11:31:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdbool>
#include <ctime>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	AForm("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
	AForm("Robotomy Request Form", 72, 45), _target(src._target)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	AForm::operator=(src);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::_performAction() const
{
	static bool seed = false;

	if (seed == false)
	{
		srand(time(NULL));
		seed = true;
	}
	std::cout << "Brrrrr.. " << this->_target;
	if (rand() % 2)
		std::cout << " has been robotomized successfully." << std::endl;
	else
		std::cout << " has not been robotomized successfully." << std::endl;
}
