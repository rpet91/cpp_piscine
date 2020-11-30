/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 09:49:27 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/22 14:28:23 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_amount; i++)
		this->_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int n)
{
	this->_amount = n;
	if (n < 0)
		return ;
	this->_zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
		this->_zombies[i] = Zombie("", "Crawler");
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	if (this->_amount >= 0)
		delete [] this->_zombies;
	return;
}
