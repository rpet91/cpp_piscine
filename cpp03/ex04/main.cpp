/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:07:15 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 11:47:43 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <cstdlib>
#include <string>

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
	
	NinjaTrap	e;
	NinjaTrap	f("Pizzaman");

	f.meleeAttack("Ninja destroyer");
	f.takeDamage(26);
	f.rangedAttack("Ninja destroyer");
	f.beRepaired(15);
	f.ninjaShoebox(a);
	f.ninjaShoebox(b);
	f.ninjaShoebox(c);
	f.ninjaShoebox(d);
	f.ninjaShoebox(e);
	f.ninjaShoebox(f);

	std::cout << std::endl;

	SuperTrap g;
	SuperTrap h("Carb eater");

	h.meleeAttack("Enderman");
	h.takeDamage(26);
	h.rangedAttack("Enderman");
	h.beRepaired(15);
	h.vaulthunter_dot_exe("Skeleton");
	h.vaulthunter_dot_exe("Skeleton");
	h.vaulthunter_dot_exe("Skeleton");
	h.vaulthunter_dot_exe("Skeleton");
	h.vaulthunter_dot_exe("Skeleton");
	h.ninjaShoebox(a);
	h.ninjaShoebox(b);
	h.ninjaShoebox(c);
	h.ninjaShoebox(d);
	h.ninjaShoebox(e);
	h.ninjaShoebox(f);

	std::cout << std::endl;
	return (0);
}
