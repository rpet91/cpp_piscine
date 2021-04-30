/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:32:45 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/30 13:31:02 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon()
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &original) : Victim(original)
{
	std::cout << "Copy zog zog." << std::endl;
}

Peon	&Peon::operator=(Peon const &original)
{
	this->_name = original.getName();
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
