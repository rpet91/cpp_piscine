/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:10:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/22 16:01:42 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(void) : _hp(100), _maxhp(100), _ep(100), _maxep(100), _level(1),
	_name("Handsome Jack"), _meleeAtk(30), _rangedAtk(20), _armorDmgRed(5)
{
	std::cout << this->_name <<
		" arises. Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hp(100), _maxhp(100), _ep(100), _maxep(100),
	_level(1), _name(name), _meleeAtk(30), _rangedAtk(20), _armorDmgRed(5)
{
	std::cout << this->_name <<
		" is ready to fight. This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death. " << 
		this->_name << " died." << std::endl;
}

FragTrap::FragTrap(FragTrap const &original)
{
	std::cout << "Let's get this party started!" << std::endl;
	*this = original;
}

FragTrap &FragTrap::operator=(FragTrap const &original)
{
	std::cout << "Hey everybody! Check out my package" << std::endl;
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

void		FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
		" at range, causing " << this->_rangedAtk << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
		" at close combat, causing " << this->_meleeAtk << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	if (this->_ep >= 25)
	{
		this->_ep -= 25;
		std::cout << "FR4G-TP " << this->_name << " uses the attack \"" << getRndAtk() <<
			"\" to hit " << target << ". " << this->_name << " has " <<
			this->_ep << " ep left." << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " doesn't have enough ep. " <<
			this->_name << " has " << this->_ep << " ep left." << std::endl;
	}
}

std::string	FragTrap::getRndAtk(void)
{
	int				amount;
	std::string		attack;
	std::string		atk_pool[] = {"Bad guy go boom!", "Meat confetti", "Love bullets!",
		"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
		"Avada kedavra!"};

	amount = sizeof(atk_pool) / sizeof(std::string);
	attack = atk_pool[rand() % amount];
	return (attack);
}
