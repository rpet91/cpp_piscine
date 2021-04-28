/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:14 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:11:09 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &original)
{
	*this = original;
}

AWeapon &AWeapon::operator=(AWeapon const &original)
{
	this->_name = original.getName();
	this->_apcost = original.getAPCost();
	this->_damage = original.getDamage();
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string const	&AWeapon::getName() const
{
	return (this->_name);
}

int					AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int					AWeapon::getDamage() const
{
	return (this->_damage);
}
