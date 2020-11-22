/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:49:31 by rpet          #+#    #+#                 */
/*   Updated: 2020/10/13 10:55:42 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
	std::cout << std::endl;
	return (0);
}
