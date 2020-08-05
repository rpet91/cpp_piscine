/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:56:37 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 14:32:54 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

Brain const		&Human::getBrain(void) const
{
	return (this->_brain);
}

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}
