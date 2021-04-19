/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SvavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 16:28:18 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/29 11:43:18 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &original);
		ScavTrap& operator=(ScavTrap const &original);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(void);

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
		
		std::string		_getRndChallenge(void);
};

#endif
