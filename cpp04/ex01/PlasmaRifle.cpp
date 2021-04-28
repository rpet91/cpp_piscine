/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:32 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:23:27 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &original) : AWeapon(original)
{
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &original)
{
	this->_name = original.getName();
	this->_apcost = original.getAPCost();
	this->_damage = original.getDamage();
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
