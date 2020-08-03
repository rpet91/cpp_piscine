/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:56:47 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/03 14:42:46 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
	std::cout << "Constructor" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << "Destructor" << std::endl;
	return;
}
