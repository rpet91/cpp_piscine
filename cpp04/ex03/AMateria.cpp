/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:12:16 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 08:06:38 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &original)
{
	*this = original;
}

AMateria	&AMateria::operator=(AMateria const &original)
{
	this->_type = original._type;
	this->_xp = original._xp;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

void		AMateria::use(ICharacter &target)
{
	(void) target;
	this->_xp += 10;
}
