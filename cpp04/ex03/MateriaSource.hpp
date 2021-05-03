/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:13:45 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 12:01:50 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &original);
		MateriaSource	&operator=(MateriaSource const &original);
		virtual ~MateriaSource();

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_materias[4];
		int			_idx;

};

#endif
