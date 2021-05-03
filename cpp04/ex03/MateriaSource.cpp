/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:13:52 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 12:03:07 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

MateriaSource::MateriaSource() : _idx(0)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}


MateriaSource::MateriaSource(MateriaSource const &original)
{
	*this = original;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &original)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = original._materias[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_idx >= 4)
		return ;
	this->_materias[this->_idx] = materia;
	this->_idx++;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_idx; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (0);
}
