/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:32:30 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 11:16:49 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>

Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &original)
{
	*this = original;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &original)
{
	this->_name = original._name;
	this->_title = original._title;
	return (*this);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title <<
		", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &src)
{
	os << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}

void			Sorcerer::polymorph(Victim const &src) const
{
	src.getPolymorphed();
}
