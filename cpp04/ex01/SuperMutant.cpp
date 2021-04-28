/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:15 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:27:50 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &original) : Enemy(original)
{
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &original)
{
	this->_hp = original.getHP();
	this->_type = original.getType();
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
