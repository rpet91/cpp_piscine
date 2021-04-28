/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:32:38 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 15:19:29 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &original)
{
	*this = original;
}

Victim	&Victim::operator=(Victim const &original)
{
	this->_name = original._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string		Victim::getName() const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &os, Victim const &src)
{
	os << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (os);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
