/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/19 14:48:46 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 11:36:28 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(void) : ClapTrap("Rikkert"), FragTrap("Rikkert"), NinjaTrap("Rikkert")
{
	std::cout << "Rikkert has joined the cause. She's awesome." << std::endl;
	this->_hp = this->FragTrap::_hp;
	this->_maxhp = this->FragTrap::_maxhp;
	this->_ep = this->NinjaTrap::_ep;
	this->_maxep = this->NinjaTrap::_maxep;
	this->_level = 1;
	this->_meleeAtk = this->NinjaTrap::_meleeAtk;
	this->_rangedAtk = this->FragTrap::_rangedAtk;
	this->_armorDmgRed = this->FragTrap::_armorDmgRed;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << name << " is in the house. Let's do this." << std::endl;
	this->_hp = this->FragTrap::_hp;
	this->_maxhp = this->FragTrap::_maxhp;
	this->_ep = this->NinjaTrap::_ep;
	this->_maxep = this->NinjaTrap::_maxep;
	this->_level = 1;
	this->_meleeAtk = this->NinjaTrap::_meleeAtk;
	this->_rangedAtk = this->FragTrap::_rangedAtk;
	this->_armorDmgRed = this->FragTrap::_armorDmgRed;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << this->_name << " decided to stop living. Cya." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &original)
{
	std::cout << "Copy me timbers" << std::endl;
	*this = original;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &original)
{
	std::cout << "Extremely SUPER important overload operator." << std::endl;
	this->_hp = original._hp;
	this->_maxhp = original._maxhp;
	this->_ep = original._ep;
	this->_maxep = original._maxep;
	this->_level = original._level;
	this->_name = original._name;
	this->_meleeAtk = original._meleeAtk;
	this->_rangedAtk = original._rangedAtk;
	this->_armorDmgRed = original._armorDmgRed;
	return (*this);
}
