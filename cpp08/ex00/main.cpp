/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 07:22:57 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/18 11:21:55 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

void	vectorTest()
{
	std::vector<int>::iterator	it;
	std::vector<int>			v;

	for (int i = 0; i < 10; i++)
		v.push_back(i * 5);

	// Test where the search value is in the vector.
	it = easyfind(v, 20);
	if (it != v.end())
		std::cout << "The value " << *it << " has been found!" << std::endl;
	else
		std::cout << "The given search value has not been found." << std::endl;
	
	// Test where the search value is not in the vector.
	it = easyfind(v, 39);
	if (it != v.end())
		std::cout << "The value " << *it << " has been found!" << std::endl;
	else
		std::cout << "The given search value has not been found." << std::endl;
	
	std::cout << std::endl;
}

void	listTest()
{
	std::list<int>::iterator	it;
	std::list<int>				v;

	// Test where the search value is in the list.
	for (int i = 0; i < 10; i++)
		v.push_back(i * 5);
	it = easyfind(v, 35);
	if (it != v.end())
		std::cout << "The value " << *it << " has been found!" << std::endl;
	else
		std::cout << "The given search value has not been found." << std::endl;

	// Test where the search value is not in the list.
	it = easyfind(v, 67);
	if (it != v.end())
		std::cout << "The value " << *it << " has been found!" << std::endl;
	else
		std::cout << "The given search value has not been found." << std::endl;

	std::cout << std::endl;
}

int		main()
{
	vectorTest();
	listTest();
	return (0);
}
