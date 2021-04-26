/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:10:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 08:52:33 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap(void) : _name("Mr. Blake")
{
	std::cout << this->_name << " the Cl4pTr4pper has been called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << this->_name << " the Cl4pTr4pper just arrived." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " stopped their life." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	std::cout << "ClapTrapper's copy constructor" << std::endl;
	*this = original;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &original)
{
	std::cout << "ClapTrapper's operator overload" << std::endl;
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

void		ClapTrap::rangedAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
		" at range, causing " << this->_rangedAtk << " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
		" at close combat, causing " << this->_meleeAtk << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int		dmg = (int)amount - this->_armorDmgRed;

	if (this->_hp <= 0)
		return ;
	if (dmg < 0)
		dmg = 0;
	if (dmg > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= dmg;
	std::cout << "FR4G-TP " << this->_name << " took " << dmg << " points of damage. " <<
		this->_name << "'s hp is now " << this->_hp << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int		heal = amount;

	if (this->_hp <= 0)
		return ;
	this->_hp += heal;
	if (this->_hp > this->_maxhp)
		this->_hp = this->_maxhp;
	std::cout << "FR4G-TP " << this->_name << " repairs " << heal << " points of damage. " <<
		this->_name << "'s hp is now " << this->_hp << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
