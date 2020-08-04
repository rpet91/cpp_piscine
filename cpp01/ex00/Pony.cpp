/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:56:47 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/04 09:14:39 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string pony) : _name(pony)
{
	std::cout << this->_name << ", the pony awakes!" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " decided to go to sleep." << std::endl;
	return;
}

void	Pony::feed(void)
{
	std::cout << "You fed " << this->_name;
	std::cout << ", it's a little bit fatter now." << std::endl;
}

void	Pony::run(void)
{
	std::cout << this->_name << " started running, it almost fled." << std::endl;
}

void	Pony::pet(void)
{
	std::cout << "You started to pet " << this->_name;
	std::cout << ". It loves you even more now." << std::endl;
}

void	Pony::ride(void)
{
	std::cout << "You gently started to ride " << this->_name;
	std::cout << ". What a happy time to live in." << std::endl; 
}
