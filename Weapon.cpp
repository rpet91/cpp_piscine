/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 08:16:17 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/06 09:29:24 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);	
}

void				Weapon::setType(std::string type)
{
	this->_type = type;	
}
