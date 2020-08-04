/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 09:21:25 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/04 09:22:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}
