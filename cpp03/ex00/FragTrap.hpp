/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:11:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/29 11:43:31 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &original);
		FragTrap& operator=(FragTrap const &original);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void			vaulthunter_dot_exe(std::string const & target);
		
	private:
		int				_hp;
		int				_maxhp;
		int				_ep;
		int				_maxep;
		int				_level;
		std::string		_name;
		int				_meleeAtk;
		int				_rangedAtk;
		int				_armorDmgRed;

		std::string		_getRndAtk(void);
};

#endif
