/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:26:44 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/28 13:10:55 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

bool	Zombie::_seeded = false;

Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	if (_seeded == false)
	{
		srand(time(NULL));
		_seeded = true;
	}
	if (this->_name == "")
		this->_randomName();
	return;
}

Zombie::~Zombie(void)
{
	return;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type;
	std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::_randomName(void)
{
	int			amount;
	std::string	pool[] = {"Remco", "Mark", "Lars", "Boris", "Peer", "Jonas", "Sam",
		"Rixt", "Thimo", "Sid", "Ingmar", "Ivy", "Abel", "Brendan", "Lisa", "Bob"};

	amount = sizeof(pool) / sizeof(std::string);
	this->_name = pool[rand() % amount];
}
