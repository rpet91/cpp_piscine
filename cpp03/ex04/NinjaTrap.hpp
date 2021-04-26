/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 13:16:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 07:30:01 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap {

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const &original);
		NinjaTrap& operator=(NinjaTrap const &original);

		void	ninjaShoebox(FragTrap const &target);
		void	ninjaShoebox(ScavTrap const &target);
		void	ninjaShoebox(ClapTrap const &target);
		void	ninjaShoebox(NinjaTrap const &target);

		static const int	maxhp;
		static const int	maxep;
		static const int	meleeAtk;
		static const int	rangedAtk;
		static const int	armorDmgRed;
};

#endif
