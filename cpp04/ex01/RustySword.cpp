/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RustySword.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:06 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 11:09:09 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RustySword.hpp"
#include "AWeapon.hpp"
#include <iostream>

RustySword::RustySword() : AWeapon("Rusty sword", 8, -12)
{
}

RustySword::RustySword(RustySword const &original) : AWeapon(original)
{
}

RustySword	&RustySword::operator=(RustySword const &original)
{
	this->_name = original.getName();
	this->_apcost = original.getAPCost();
	this->_damage = original.getDamage();
	return (*this);
}

RustySword::~RustySword()
{
}

void	RustySword::attack() const
{
	std::cout << "* Choppa choppa *" << std::endl;
}
