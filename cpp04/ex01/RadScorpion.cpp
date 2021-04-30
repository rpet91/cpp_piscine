/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:43 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/30 13:30:19 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &original) : Enemy(original)
{
	std::cout << "*Copy click click click *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &original)
{
	this->_hp = original.getHP();
	this->_type = original.getType();
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg);
}
