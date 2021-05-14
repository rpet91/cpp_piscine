/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/14 08:51:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/14 13:32:35 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

void	chrTest()
{
	char	 		pool [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	Array<char>		chrTest(5);

	for	(int i = 0; i < 5; i++)
	{
		chrTest[i] = pool[rand() % sizeof(pool)];
		std::cout << "In Array " << i << ": " << chrTest[i] << std::endl;
	}
	std::cout << "The array size is: " << chrTest.size() << std::endl;
	try
	{
		std::cout << "In Array[nb]: " << chrTest[2] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Given number is out of limits." << std::endl;
	}
	std::cout << std::endl;
}

void	strTest()
{
	std::string	 		pool [] = {"Ambrosius", "Morris", "Patricia", "Eggie", "Joost"};
	Array<std::string>	strTest(5);

	for	(int i = 0; i < 5; i++)
	{
		strTest[i] = pool[rand() % (sizeof(pool) / sizeof(std::string))];
		std::cout << "In Array " << i << ": " << strTest[i] << std::endl;
	}
	std::cout << "The array size is: " << strTest.size() << std::endl;
	try
	{
		std::cout << "In Array[nb]: " << strTest[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Given number is out of limits." << std::endl;
	}
	std::cout << std::endl;
}

void	intTest()
{
	Array<int>	intTest(5);

	for (int i = 0; i < 5; i++)
	{
		intTest[i] = 42 + i;
		std::cout << "In Array " << i << ": " << intTest[i] << std::endl;
	}
	std::cout << "The array size is: " << intTest.size() << std::endl;
	try
	{
		std::cout << "In Array[nb]: " << intTest[1337] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Given number is out of limits." << std::endl;
	}
	std::cout << std::endl;
}

int	main()
{
	srand(time(NULL));
	intTest();
	strTest();
	chrTest();
	return (0);
}
