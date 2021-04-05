/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:07:15 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/05 13:05:00 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int		main(void)
{
	srand(time(NULL));

	FragTrap	a;
	FragTrap	b("Remco");

	a.meleeAttack("The Impostor");
	a.takeDamage(26);
	a.rangedAttack("The Impostor");
	a.beRepaired(15);
	a.vaulthunter_dot_exe("Epic Spider");
	a.vaulthunter_dot_exe("Epic Spider");
	a.vaulthunter_dot_exe("Epic Spider");
	a.vaulthunter_dot_exe("Epic Spider");
	a.vaulthunter_dot_exe("Epic Spider");

	ScavTrap	c;
	ScavTrap	d("Petje");

	c.meleeAttack("Creeper");
	c.takeDamage(26);
	c.rangedAttack("Creeper");
	c.beRepaired(15);
	c.challengeNewcomer();
	c.challengeNewcomer();
	c.challengeNewcomer();
	c.challengeNewcomer();
	c.challengeNewcomer();
	return (0);
}
