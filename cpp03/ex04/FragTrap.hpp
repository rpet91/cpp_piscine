/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:11:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 07:29:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &original);
		FragTrap& operator=(FragTrap const &original);

		void			vaulthunter_dot_exe(std::string const & target);
		
		static const int	maxhp;
		static const int	maxep;
		static const int	meleeAtk;
		static const int	rangedAtk;
		static const int	armorDmgRed;
		
	private:
		std::string		_getRndAtk(void);
};

#endif
