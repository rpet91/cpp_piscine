/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Slave.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:30:14 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 11:43:44 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"
#include "Victim.hpp"
#include <iostream>

Slave::Slave(void)
{
}

Slave::Slave(std::string name) : Victim(name)
{
	std::cout << "Okay okay, I will work." << std::endl;
}

Slave::Slave(Slave const &original)
{
	*this = original;
}

Slave	&Slave::operator=(Slave const &original)
{
	this->_name = original._name;
	return (*this);
}

Slave::~Slave(void)
{
	std::cout << "It's time to go." << std::endl;
}

void	Slave::getPolymorphed(void) const
{
	std::cout << this->_name << " the Slave just turned into a chicken." << std::endl;
}
