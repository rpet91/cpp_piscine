/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertFunctions.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:42:41 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/11 14:49:41 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>

void		convertChar(std::string arg)
{
	std::cout << "Char: " << arg << std::endl;
	std::stringstream	ss;
	char	c;
	ss << arg;
	ss >> c;
}

void		convertInt(std::string arg)
{
	std::cout << "Int: " << arg << std::endl;
	std::stringstream	ss;
	int		i;
	ss << arg;
	ss >> i;

}

void		convertFloat(std::string arg)
{
	std::cout << "Float: " << arg << std::endl;
	std::stringstream	ss;
	float	f;
	ss << arg;
	ss >> f;

}

void		convertDouble(std::string arg)
{
	std::cout << "Double: " << arg << std::endl;
	std::stringstream	ss;
	double	d;
	ss << arg;
	ss >> d;

}

void		convertSpecial(std::string arg)
{
	std::cout << "Special: " << arg << std::endl;
	std::cout << arg << std::endl;
}
