/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 12:57:49 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/12 14:49:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

std::string	createString()
{
	std::string	const	pool =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	std::string			randomString;
	int					randomLength = (rand() % 17) + 3;
	
	for (int i = 0; i < randomLength; i++)
		randomString += pool[rand() % 62];
	return (randomString);
}

Data		*deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

void		*serialize()
{
	Data				*serial = new Data();

	serial->randomString1 = createString();
	serial->randomNumber = rand();
	serial->randomString2 = createString();


	std::cout << serial->randomString1 << std::endl;
	std::cout << serial->randomNumber << std::endl;
	std::cout << serial->randomString2 << std::endl;
	return (serial);
}

int			main()
{
	srand(time(NULL));
	void	*serial = serialize();
	return (0);
}
