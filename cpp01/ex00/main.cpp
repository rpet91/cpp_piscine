/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:57:07 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/28 11:37:39 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack(void)
{
	Pony	pony("Bill");

	pony.feed();
	pony.feed();
	pony.feed();
	pony.run();
	pony.pet();
	pony.feed();
	pony.ride();
	pony.ride();
	pony.feed();
}

void	ponyOnTheHeap(void)
{
	Pony	*pony;

	pony = new Pony("Stormageddon");
	pony->feed();
	pony->run();
	pony->feed();
	pony->pet();
	pony->pet();
	pony->ride();
	pony->run();
	pony->run();
	pony->pet();
	delete pony;
}

int		main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}
