/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SvavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 16:28:18 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/05 10:46:40 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &original);
		ScavTrap& operator=(ScavTrap const &original);

		void	challengeNewcomer(void);

	private:
		std::string		_getRndChallenge(void);
};

#endif
