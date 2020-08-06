/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 08:16:25 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/06 09:29:26 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);

	private:
		std::string			_type;
};

#endif
