/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:10:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 11:54:20 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

const int	ScavTrap::maxhp = 100;
const int	ScavTrap::maxep = 50;
const int	ScavTrap::meleeAtk = 20;
const int	ScavTrap::rangedAtk = 15;
const int	ScavTrap::armorDmgRed = 3;

ScavTrap::ScavTrap(void) : ClapTrap("Maya")
{
	this->_hp = ScavTrap::maxhp;
	this->_maxhp = ScavTrap::maxhp;
	this->_ep = ScavTrap::maxep;
	this->_maxep = ScavTrap::maxep;
	this->_level = 1;
	this->_name = "Maya";
	this->_meleeAtk = ScavTrap::meleeAtk;
	this->_rangedAtk = ScavTrap::rangedAtk;
	this->_armorDmgRed = ScavTrap::armorDmgRed;
	std::cout << "Maya is here. She got quests." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = ScavTrap::maxhp;
	this->_maxhp = ScavTrap::maxhp;
	this->_ep = ScavTrap::maxep;
	this->_maxep = ScavTrap::maxep;
	this->_level = 1;
	this->_name = name;
	this->_meleeAtk = ScavTrap::meleeAtk;
	this->_rangedAtk = ScavTrap::rangedAtk;
	this->_armorDmgRed = ScavTrap::armorDmgRed;
	std::cout << name << " has awoken. There's more to learn!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'll get you next time! " << 
		this->_name << " died." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &original)
{
	std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
	*this = original;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &original)
{
	std::cout << "This was a reeeally bad idea!" << std::endl;
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

void		ScavTrap::challengeNewcomer(void)
{
	std::cout << "SC4V-TP " << this->_name << " actived the challenge \"" <<
		_getRndChallenge() << "\"." << std::endl;
}

std::string	ScavTrap::_getRndChallenge(void)
{
	int				amount;
	std::string		challenge;
	std::string		challenge_pool[] = {"You versus me! Me versus you! Either way!",
		"Dance battle! Or, you know... regular battle.", "Care to have a friendly duel?",
		"Man versus machine! Very tiny streamlined machine!", "Boogie time!"};

	amount = sizeof(challenge_pool) / sizeof(std::string);
	challenge = challenge_pool[rand() % amount];
	return (challenge);
}
