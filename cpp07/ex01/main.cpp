/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 09:57:31 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/17 11:56:51 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	printElement(T element)
{
	std::cout << element << std::endl;
}

int	main()
{
	std::string		strPool[] = {"Remco", "Mark", "Abel", "Nikander", "Jonas"};
	int				intPool[] = {42, 69, 1337, 9001};
	char			chrPool[] = {'r', 'e', 'm', 'c', 'o'};
	float			fltPool[] = {4.2, 6.9, 13.37, 90.01};

	iter(strPool, sizeof(strPool) / sizeof(std::string), printElement);
	std::cout << std::endl;
	iter(intPool, sizeof(intPool) / sizeof(int), printElement);
	std::cout << std::endl;
	iter(chrPool, sizeof(chrPool), printElement);
	std::cout << std::endl;
	iter(fltPool, sizeof(fltPool) / sizeof(float), printElement);
	return (0);
}
