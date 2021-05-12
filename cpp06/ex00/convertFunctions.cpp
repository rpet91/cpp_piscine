/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertFunctions.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:42:41 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/12 12:00:59 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <sstream>
#include <iostream>
#include <iomanip>

void		convertChar(std::string arg)
{
	std::stringstream	ss;
	char				c;

	ss << arg;
	ss >> c;
	printCharConversion(c);
}

void		convertInt(std::string arg)
{
	std::stringstream	ss;
	double				i;

	ss << arg;
	ss >> i;
	std::cout << std::setprecision(1) << std::fixed;
	printConversion(i);
}

void		convertFloat(std::string arg)
{
	arg.pop_back();
	std::stringstream	ss;
	size_t				precision = arg.length() - arg.find('.', 0) - 1;
	double				f;

	ss << arg;
	ss >> f;
	if (precision == 0)
		precision = 1;
	std::cout << std::setprecision(precision) << std::fixed;
	printConversion(f);
}

void		convertDouble(std::string arg)
{
	std::stringstream	ss;
	size_t				precision = arg.length() - arg.find('.', 0) - 1;
	double				d;

	ss << arg;
	ss >> d;
	if (precision == 0)
		precision = 1;
	std::cout << std::setprecision(precision) << std::fixed;
	printConversion(d);
}

void		convertSpecial(std::string arg)
{
	std::string	floatArg[] = {"inff", "-inff", "+inff", "nanf"};
	std::string	doubleArg[] = {"inf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 4; i++)
	{
		if (floatArg[i] == arg)
			arg = doubleArg[i];
		if (arg == "+inf")
			arg = "inf";
	}
	printSpecialConversion(arg);
}
