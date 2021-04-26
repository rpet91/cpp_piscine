/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 13:20:46 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/19 17:37:06 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <cstdio>

const int NinjaTrap::maxhp = 60;
const int NinjaTrap::maxep = 120;
const int NinjaTrap::meleeAtk = 60;
const int NinjaTrap::rangedAtk = 5;
const int NinjaTrap::armorDmgRed= 0;

NinjaTrap::NinjaTrap(void) : ClapTrap("Crazy Earl")
{
	std::cout << "Crazy Earl says hi" << std::endl;
	this->_hp = NinjaTrap::maxhp;
	this->_maxhp = NinjaTrap::maxhp;
	this->_ep = NinjaTrap::maxep;
	this->_maxep = NinjaTrap::maxep;
	this->_level = 1;
	this->_name = "Crazy Earl";
	this->_meleeAtk = NinjaTrap::meleeAtk;
	this->_rangedAtk = NinjaTrap::rangedAtk;
	this->_armorDmgRed = NinjaTrap::armorDmgRed;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " says hi" << std::endl;
	this->_hp = NinjaTrap::maxhp;
	this->_maxhp = NinjaTrap::maxhp;
	this->_ep = NinjaTrap::maxep;
	this->_maxep = NinjaTrap::maxep;
	this->_level = 1;
	this->_name = name;
	this->_meleeAtk = NinjaTrap::meleeAtk;
	this->_rangedAtk = NinjaTrap::rangedAtk;
	this->_armorDmgRed = NinjaTrap::armorDmgRed;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_name << " says bye" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &original)
{
	*this = original;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &original)
{
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

void	NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << target.getName() << " does something funny." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << target.getName() << " does something funnier." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << target.getName() << " does something ultra hardcore funny." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << target.getName() << " says Stebon." << std::endl;
}
