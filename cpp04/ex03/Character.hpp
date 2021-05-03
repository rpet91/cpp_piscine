/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:13:31 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 13:17:12 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter {

	public:
		Character(std::string name);
		Character(Character const &original);
		Character	&operator=(Character const &original);
		virtual ~Character();

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private:
		Character();

		std::string		_name;
		int				_amount;
		AMateria		*_inv[4];

};
#endif
