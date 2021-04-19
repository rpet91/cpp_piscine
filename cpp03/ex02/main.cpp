/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:07:15 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/19 14:08:05 by rpet          ########   odam.nl         */
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

	b.meleeAttack("The Impostor");
	b.takeDamage(26);
	b.rangedAttack("The Impostor");
	b.beRepaired(15);
	b.vaulthunter_dot_exe("Epic Spider");
	b.vaulthunter_dot_exe("Epic Spider");
	b.vaulthunter_dot_exe("Epic Spider");
	b.vaulthunter_dot_exe("Epic Spider");
	b.vaulthunter_dot_exe("Epic Spider");

	std::cout << std::endl;

	ScavTrap	c;
	ScavTrap	d("Petje");

	d.meleeAttack("Creeper");
	d.takeDamage(26);
	d.rangedAttack("Creeper");
	d.beRepaired(15);
	d.challengeNewcomer();
	d.challengeNewcomer();
	d.challengeNewcomer();
	d.challengeNewcomer();
	d.challengeNewcomer();

	std::cout << std::endl;
	
	ClapTrap	e;
	ClapTrap	f("Kabouter Plop");

	f.meleeAttack("Evil tosser");
	f.takeDamage(26);
	f.rangedAttack("Evil tosser");
	f.beRepaired(15);
	
	std::cout << std::endl;
	return (0);
}
