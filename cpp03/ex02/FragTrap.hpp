/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 08:11:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/29 16:08:06 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap : public ClapTrap {

	public:
		void			vaulthunter_dot_exe(std::string const & target);
		
	private:
		std::string		_getRndAtk(void);
};

#endif
