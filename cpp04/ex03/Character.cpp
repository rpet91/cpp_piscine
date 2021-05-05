/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:13:35 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/05 09:08:19 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Character::Character()
{
}

Character::Character(std::string name) : _name(name), _amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::Character(Character const &original)
{
	*this = original;
}

Character	&Character::operator=(Character const &original)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inv[i];
		this->_inv[i] = original._inv[i]->clone();
	}
	this->_name = original._name;
	this->_amount = original._amount;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_inv[i];
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	if (_amount >= 4 || !m)
		return ;
	this->_inv[this->_amount] = m;
	this->_amount++;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_inv[idx])
		return ;
	this->_inv[idx] = 0;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !this->_inv[idx])
		return ;
	this->_inv[idx]->use(target);
}
