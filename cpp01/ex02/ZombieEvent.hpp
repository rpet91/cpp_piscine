/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:27:13 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 09:05:28 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <iostream>

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);

	private:
		std::string		_type;
};

#endif
