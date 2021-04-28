/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:54 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 15:15:05 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name), _ap(40)
{
}

Character::Character(Character const &original)
{
	*this = original;
}

Character	&Character::operator=(Character const &original)
{
	this->_name = original._name;
	this->_ap = original._ap;
	this->_weapon = original._weapon;
	return (*this);
}


Character::~Character()
{
}

void		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy *target)
{

}

std::string	Character::getName() const
{
	return (this->_name);
}

int			Character::getAP() const
{
	return (this->_ap);
}

AWeapon		*Character::getAWeapon() const
{
	return (this->_weapon);
}

std::ostream	&operator<<(std::ostream &os, Character const &src)
{
	if (src.getAWeapon())
		os << src.getName() << " has " << src.getAP() << " AP and wields a "
			<< src.getAWeapon() << std::endl;
	else
		os << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
}
