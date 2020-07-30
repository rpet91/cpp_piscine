/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:49:31 by rpet          #+#    #+#                 */
/*   Updated: 2020/07/27 14:03:55 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i])
			{
				std::cout << std::uppercase << *argv[i];
				argv[i]++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
