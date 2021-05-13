/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 12:57:49 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/13 07:26:15 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

struct	Data {
	std::string	randomString1;
	int			randomNumber;
	std::string	randomString2;
};

std::string	createString()
{
	std::string	const	pool =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	std::string			randomString;
	int					randomLength = (rand() % 41) + 1;
	
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
	Data	*data = new Data();

	data->randomString1 = createString();
	data->randomNumber = rand();
	data->randomString2 = createString();
	return (reinterpret_cast<void *>(data));
}

int			main()
{
	srand(time(NULL));

	void	*serial = serialize();
	Data	*data = deserialize(serial);

	std::cout << data->randomString1 << std::endl;
	std::cout << data->randomNumber << std::endl;
	std::cout << data->randomString2 << std::endl;

	delete data;
	return (0);
}
