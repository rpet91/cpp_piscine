/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:49 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 15:09:41 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <string>

class Character {

	public:
		Character(std::string const &name);
		Character(Character const &original);
		Character	&operator=(Character const &original);
		~Character();

		void				recoverAP();
		void				equip(AWeapon *weapon);
		void				attack(Enemy *target);

		std::string virtual	getName() const;
		int					getAP() const;
		AWeapon				*getAWeapon() const;

	private:
		Character();

		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
};

std::ostream &operator<<(std::ostream &os, Character const &src);

#endif
