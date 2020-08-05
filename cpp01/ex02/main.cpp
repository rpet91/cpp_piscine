/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:27:22 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 09:36:51 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		zombie_stack("Ben", "Flesh Eater");
	Zombie		*zombie_heap;
	Zombie		*zombie_random;
	ZombieEvent	event;

	zombie_stack.announce();
	event.setZombieType("Hugger");
	zombie_heap = event.newZombie("Hank");
	zombie_heap->announce();
	delete zombie_heap;
	event.setZombieType("Zombie Werewolf");
	zombie_random = event.randomChump();
	zombie_random->announce();
	delete zombie_random;
	return (0);
}
