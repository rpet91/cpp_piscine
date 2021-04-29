/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   GigaAnt.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:45:42 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 13:19:01 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "GigaAnt.hpp"
#include "Enemy.hpp"
#include <iostream>

GigaAnt::GigaAnt() : Enemy(620, "Giga Ant")
{
	std::cout << "* Prrt prrt prrt *" << std::endl;
}

GigaAnt::GigaAnt(GigaAnt const &original) : Enemy(original)
{
}

GigaAnt	&GigaAnt::operator=(GigaAnt const &original)
{
	this->_hp = original.getHP();
	this->_type = original.getType();
	return (*this);
}

GigaAnt::~GigaAnt()
{
	std::cout << "* SCHLONK *" << std::endl;
}

void	GigaAnt::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg);
}
