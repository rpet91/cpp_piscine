/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 14:52:32 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/19 16:56:10 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &original);
		ClapTrap& operator=(ClapTrap const &original);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;

	protected:
		int			_hp;
		int			_maxhp;
		int			_ep;
		int			_maxep;
		int			_level;
		std::string	_name;
		int			_meleeAtk;
		int			_rangedAtk;
		int			_armorDmgRed;
};

#endif
