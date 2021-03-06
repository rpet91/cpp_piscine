/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:07:15 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/19 14:21:00 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	return (0);
}
