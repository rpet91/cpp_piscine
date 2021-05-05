/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:10:31 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/05 09:08:22 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

void	subject_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
}

void	my_test()
{
	IMateriaSource	*src= new MateriaSource();
	ICharacter		*remco = new Character("Remco");
	ICharacter		*target = new Character("Target");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria		*tmp;
	tmp = src->createMateria("ice");
	remco->equip(tmp);
	tmp = src->createMateria("cure");
	remco->equip(tmp);

	std::cout << "XP before use: " << tmp->getXP() << std::endl;
	for (int i = 0; i < 4; i++)
		remco->use(1, *target);
	std::cout << "XP after 4x use: " << tmp->getXP() << std::endl;
	std::cout << std::endl;

	// Showing using on a non existing AMateria doesn't work
	// followed by a working AMateria use.
	remco->use(2, *target);
	tmp = src->createMateria("ice");
	remco->equip(tmp);
	remco->use(2, *target);
	std::cout << std::endl;

	// Showing the use of 0 still works before unequiping it
	// and stops working after unequiping. Also showing unequiping 2x doesn't crash.
	remco->use(0, *target);
	remco->unequip(0);
	remco->unequip(0);
	remco->use(0, *target);

	// Showing using an non existing AMateria doesn't crash.
	remco->use(-1, *target);
	remco->use(1337, *target);

	delete target;
	delete remco;
	delete src;
}

int		main()
{
	subject_test();
	my_test();
	//Test for leaks
	//while(1);
	return 0;
}
