/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:11:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/05 10:47:16 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &original);
		FragTrap& operator=(FragTrap const &original);

		void			vaulthunter_dot_exe(std::string const & target);
		
	private:
		std::string		_getRndAtk(void);
};

#endif
