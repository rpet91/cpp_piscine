/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:12:56 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 10:37:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &original) : AMateria(original)
{
	*this = original;
}

Cure	&Cure::operator=(Cure const &original)
{
	this->_type = original._type;
	this->_xp = original._xp;
	return (*this);
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
