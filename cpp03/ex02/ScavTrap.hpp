/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SvavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 16:28:18 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/29 16:07:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap : public ClapTrap {

	public:
		void	challengeNewcomer(void);

	private:
		std::string		_getRndChallenge(void);
};

#endif
