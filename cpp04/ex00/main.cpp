/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:50:43 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 11:56:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Slave.hpp"
#include <iostream>

int main(void)
{
	//	Mandatory main test.
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	//	Extra (and also mandatory) test.
	Slave		ben("Ben");

	std::cout << ben;
	robert.polymorph(ben);
	return (0);
}
