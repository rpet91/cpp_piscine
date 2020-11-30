/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:27:06 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/30 11:48:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void);

	private:
		void			_randomName(void);
		std::string		_name;
		std::string		_type;
		static bool		_seeded;
};

#endif
