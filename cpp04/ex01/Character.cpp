/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:54 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 13:18:35 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(0)
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
	if (this->_ap == 40)
	{
		std::cout << this->_name << " can't regenerate more ap! 40 is max." << std::endl;
		return ;
	}
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	std::cout << this->_name << " recovered 10 ap and now has "
		<< this->_ap << " ap." << std::endl;
}

void		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy *target)
{
	if (!this->_weapon)
	{
		std::cout << this->_name <<
			" tries to attack without a weapon. That doesn't work!" << std::endl;
		return ;
	}
	if (this->_ap - this->_weapon->getAPCost() < 0)
	{
		std::cout << "Not enough AP! You'll need to recover first!" << std::endl;
		return ;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << target->getType() <<
		" with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	target->takeDamage(this->_weapon->getDamage());
	if (target->getHP() <= 0)
		delete target;
}

std::string	Character::getName() const
{
	return (this->_name);
}

int			Character::getAP() const
{
	return (this->_ap);
}

AWeapon		*Character::getWeapon() const
{
	return (this->_weapon);
}

std::ostream	&operator<<(std::ostream &os, Character const &src)
{
	os << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getWeapon())
		os << "wields a " << src.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}
