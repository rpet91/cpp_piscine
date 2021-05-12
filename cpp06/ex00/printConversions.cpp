/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printConversions.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:46:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/12 12:54:49 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cfloat>

static void		printOverflow(std::string type)
{
	std::cout << type << ": impossible" << std::endl;
}

void			printCharConversion(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void			printConversion(double nb)
{
	if (nb >= 33 && nb <= 126)
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (nb <= INT_MAX && nb >= INT_MIN)
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		printOverflow("int");
	if (nb <= FLT_MAX && nb >= LONG_MIN)
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	else
		printOverflow("float");
	if (nb <= DBL_MAX && nb >= LONG_MIN)
		std::cout << "double: " << nb << "" << std::endl;
	else
		printOverflow("double");
}

void			printSpecialConversion(std::string arg)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << arg << "f" << std::endl;
	std::cout << "double " << arg << std::endl;
}
