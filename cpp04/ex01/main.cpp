/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:01:00 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 13:18:12 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "RustySword.hpp"
#include "GigaAnt.hpp"
#include <iostream>


void test_APuser()
{
	std::cout << std::endl << "TEST_APUSER" << std::endl;
	Character	*person = new Character("AP USER");
	Enemy		*target = new GigaAnt();
	AWeapon		*weapon = new PowerFist();


	std::cout << *person;
	person->equip(weapon);
	std::cout << *person;
	person->attack(target);
	std::cout << *person;
	person->recoverAP();
	person->recoverAP();
	person->attack(target);
	person->attack(target);
	person->attack(target);
	person->attack(target);
	std::cout << *person;
	person->attack(target);
	std::cout << *person;
	person->attack(target);
	std::cout << *person;
	
	delete weapon;
	delete target;
	delete person;
}

	// Test killing an enemy.
void test_Killing()
{
	std::cout << std::endl << "TEST_KILLING" << std::endl;
	Character	*person = new Character("Killer");
	Enemy		*target = new RadScorpion();
	AWeapon		*weapon = new PlasmaRifle();

	std::cout << *person;
	person->equip(weapon);
	std::cout << *person;
	person->attack(target);
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;
	person->attack(target);
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;
	person->attack(target);
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;
	//This will kill the target, where it will be deleted.
	person->attack(target);
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;

	delete weapon;
	// There is no way to check if an enemy (target) is dead.
	// So unless it's dead you can delete it here.
	//delete target;
	delete person;
}

	// Test attacking with negative number for damage.
void	test_NegativeDmg()
{
	std::cout << std::endl << "TEST_NEGATIVEDMG" << std::endl;
	Character	*person = new Character("Negative damage");
	Enemy		*target = new SuperMutant();
	AWeapon		*weapon = new RustySword();

	std::cout << *person;
	person->equip(weapon);
	std::cout << *person;
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;
	person->attack(target);
	std::cout << target->getType() << " has " << target->getHP() << " hp left." << std::endl;

	delete weapon;
	delete target;
	delete person;
}

	// Test attacking with no equiped weapon.
void	test_NoWeapon()
{
	std::cout << std::endl << "TEST_NOWEAPON" << std::endl;
	Character	*person = new Character("NoWeapon");
	Enemy		*target = new SuperMutant();

	std::cout << *person;
	person->attack(target);
	std::cout << *person;

	delete target;
	delete person;
}

int	main()
{
	//test_NoWeapon();
	//test_NegativeDmg();
	//test_Killing();
	test_APuser();
	return (0);
}
