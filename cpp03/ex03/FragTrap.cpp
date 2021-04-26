/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:10:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 11:14:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(void) : ClapTrap("Handsome Jack")
{
	std::cout << this->_name <<
		" arises. Look out everybody! Things are about to get awesome!" << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_ep = 100;
	this->_maxep = 100;
	this->_level = 1;
	this->_meleeAtk = 30;
	this->_rangedAtk = 20;
	this->_armorDmgRed = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	std::cout << this->_name <<
		" is ready to fight. This time it'll be awesome, I promise!" << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_ep = 100;
	this->_maxep = 100;
	this->_level = 1;
	this->_meleeAtk = 30;
	this->_rangedAtk = 20;
	this->_armorDmgRed = 5;
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_hp <= 0)
		return ;
	if (this->_ep >= 25)
	{
		this->_ep -= 25;
		std::cout << "FR4G-TP " << this->_name << " uses the attack \"" << _getRndAtk() <<
			"\" to hit " << target << ". " << this->_name << " has " <<
			this->_ep << " ep left." << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " doesn't have enough ep. " <<
			this->_name << " has " << this->_ep << " ep left." << std::endl;
	}
}

std::string	FragTrap::_getRndAtk(void)
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
