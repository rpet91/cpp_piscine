/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:57:07 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/03 14:42:49 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack(void)
{
	Pony	pony;

	std::cout << "Stack pony" << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony	*pony;

	pony = new Pony();
	delete pony;
	std::cout << "Heap pony" << std::endl;
}

int		main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}
