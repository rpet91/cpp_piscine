/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:26:44 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/04 10:43:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "Constructor" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
