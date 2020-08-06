/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 09:49:27 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 11:55:06 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->_zombies[i] = Zombie("", "Crawler");
		this->_zombies[i].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	return;
}
