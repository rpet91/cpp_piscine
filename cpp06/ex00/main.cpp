/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 09:37:43 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/12 10:51:14 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <iostream>
#include <cstdbool>

static e_type	detectType(std::string arg)
{
	bool		dotFound = false;
	std::string	special[] =
	{"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 8; i++)
	{
		if (arg == special[i])
			return (SPECIAL);
	}
	if (arg.length() == 1 && !isdigit(arg[0]))
		return (CHAR);
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '-' && i == 0)
			continue ;
		if (arg[i] == 'f' && dotFound == true && i + 1 == arg.length())
			break ;
		if (!isdigit(arg[i]) && (arg[i] != '.' || dotFound == true))
			return (INVALID);
		if (arg[i] == '.')
			dotFound = true;
	}
	if (dotFound == true)
	{
		int	sign = 0;

		if (arg[0] == '-')
			sign = 1;
		if (arg[1 + sign] == 'f')
			return (INVALID);
		if (arg[arg.length() - 1] == 'f')
			return (FLOAT);
		return (DOUBLE);
	}
	return (INT);
}

int				main(int argc, char **argv)
{

	typedef void	(*functions)(std::string arg);
	functions		convertFunctions[] =
		{convertChar, convertInt, convertFloat, convertDouble, convertSpecial};

	if (argc != 2)
	{
		std::cerr << "Error: Program needs exact one argument." << std::endl;
		return (0);
	}
	std::string arg = static_cast<std::string>(argv[1]);
	e_type	type = detectType(arg);
	if (type == INVALID)
		std::cerr << "Error: Argument is not a char, int, float or double." << std::endl;
	else
		convertFunctions[type](arg);
	return (0);
}
