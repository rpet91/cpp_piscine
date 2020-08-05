/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:55:21 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 14:32:55 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain(void)
{
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string		Brain::identify(void) const
{
	std::stringstream	brainAddr;
   
	brainAddr << this;
	return (brainAddr.str());
}
