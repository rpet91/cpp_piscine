/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:23:33 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/30 13:17:11 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad() : _count(0), _marines(0)
{
}

Squad::Squad(Squad const &original) : _count(0), _marines(0)
{
	*this = original;
}

Squad	&Squad::operator=(Squad const &original)
{
	this->_deleteUnits();
	this->_count = original._count;
	if (this->_count == 0)
		return (*this);
	this->_marines = new ISpaceMarine*[this->_count];
	for (int i = 0; i < this->_count; i++)
	{
		ISpaceMarine *old = original.getUnit(i);
		ISpaceMarine *clone = old->clone();
		this->_marines[i] = clone;
	}
	return (*this);
}

Squad::~Squad()
{
	this->_deleteUnits();
}

int		Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	return (this->_marines[unit]);
}

int		Squad::push(ISpaceMarine *unit)
{
	ISpaceMarine	**new_marines;
	
	if (!unit)
		return (this->_count);
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_marines[i] == unit)
			return (this->_count);
	}
	new_marines = new ISpaceMarine*[this->_count + 1];
	for (int i = 0; i < this->_count; i++)
		new_marines[i] = this->_marines[i];
	new_marines[this->_count] = unit;
	this->_count++;
	delete this->_marines;
	this->_marines = new_marines;
	return (this->_count);
}

void	Squad::_deleteUnits()
{
	if (this->_count == 0)
		return ;
	for (int i = 0; i < this->_count; i++)
		delete this->_marines[i];
	delete this->_marines;

}
