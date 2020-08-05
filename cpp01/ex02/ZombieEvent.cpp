/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:26:56 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 09:25:30 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie	*tmp;

	tmp = new Zombie(name, this->_type);
	return (tmp);
}

Zombie			*ZombieEvent::randomChump(void)
{
	Zombie	*tmp;

	tmp = new Zombie("", this->_type);
	return (tmp);
}
