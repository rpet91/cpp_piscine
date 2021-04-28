/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:49 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:24:38 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &original) : AWeapon(original)
{
}

PowerFist	&PowerFist::operator=(PowerFist const &original)
{
	this->_name = original.getName();
	this->_apcost = original.getAPCost();
	this->_damage = original.getDamage();
	return (*this);
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
