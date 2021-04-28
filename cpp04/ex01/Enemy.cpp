/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:00 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:10:12 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>
#include <iostream>

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
	if (hp < 1)
		std::cout << "HP can't be lower than 1." << std::endl;
}

Enemy::Enemy(Enemy const &original)
{
	*this = original;
}

Enemy	&Enemy::operator=(Enemy const &original)
{
	this->_hp = original.getHP();
	this->_type = original.getType();
	return (*this);
}

Enemy::~Enemy()
{
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}
