/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:10:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 08:59:23 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(void) : _hp(100), _maxhp(100), _ep(50), _maxep(50), _level(1),
	_name("Maya"), _meleeAtk(20), _rangedAtk(15), _armorDmgRed(3)
{
	std::cout << this->_name <<
		" is here. She got quests." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _maxhp(100), _ep(50), _maxep(50),
	_level(1), _name(name), _meleeAtk(20), _rangedAtk(15), _armorDmgRed(3)
{
	std::cout << this->_name <<
		" has awoken. There's more to learn!" << std::endl;
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

void		ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
		" at range, causing " << this->_rangedAtk << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
		" at close combat, causing " << this->_meleeAtk << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << "SC4V-TP " << this->_name << " took " << dmg << " points of damage. " <<
		this->_name << "'s hp is now " << this->_hp << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	int		heal = amount;

	if (this->_hp <= 0)
		return ;
	this->_hp += heal;
	if (this->_hp > this->_maxhp)
		this->_hp = this->_maxhp;
	std::cout << "SC4V-TP " << this->_name << " repairs " << heal << " points of damage. " <<
		this->_name << "'s hp is now " << this->_hp << std::endl;
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
