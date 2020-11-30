/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 09:51:21 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/22 14:43:31 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde		horde_stack(5);
	horde_stack.announce();
	std::cout << std::endl;
	ZombieHorde		*horde_heap = new ZombieHorde(5);
	horde_heap->announce();
	std::cout << std::endl;
	horde_stack.announce();
	delete horde_heap;
	return (0);
}
