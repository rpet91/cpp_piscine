/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Slave.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:30:14 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/30 13:31:11 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"
#include "Victim.hpp"
#include <iostream>

Slave::Slave()
{
}

Slave::Slave(std::string name) : Victim(name)
{
	std::cout << "Okay okay, I will work." << std::endl;
}

Slave::Slave(Slave const &original) : Victim(original)
{
	std::cout << "Okay okay, I will copy." << std::endl;
}

Slave	&Slave::operator=(Slave const &original)
{
	this->_name = original.getName();
	return (*this);
}

Slave::~Slave()
{
	std::cout << "It's time to go." << std::endl;
}

void	Slave::getPolymorphed() const
{
	std::cout << this->_name << " the Slave just turned into a chicken." << std::endl;
}
