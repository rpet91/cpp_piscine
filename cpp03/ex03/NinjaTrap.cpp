/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 13:20:46 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 11:18:24 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <cstdio>

NinjaTrap::NinjaTrap(void) : ClapTrap("Crazy Earl")
{
	std::cout << this->_name << " says hi" << std::endl;
	this->_hp = 60;
	this->_maxhp = 60;
	this->_ep = 120;
	this->_maxep = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 5;
	this->_armorDmgRed = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " says hi" << std::endl;
	this->_hp = 60;
	this->_maxhp = 60;
	this->_ep = 120;
	this->_maxep = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 5;
	this->_armorDmgRed = 0;
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
