/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:11:50 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/30 14:46:40 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria {

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &original);
		AMateria	&operator=(AMateria const &original);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string			_type;
		unsigned int		_xp;

	private:
		AMateria();
};

#endif
