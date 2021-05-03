/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:12:37 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 10:37:27 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &original) : AMateria(original)
{
	*this = original;
}

Ice	&Ice::operator=(Ice const &original)
{
	this->_type = original._type;
	this->_xp = original._xp;
	return (*this);
}

Ice::~Ice()
{
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
