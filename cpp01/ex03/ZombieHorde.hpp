/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 09:49:44 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 11:55:08 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

	private:
		Zombie	*_zombies;
};

#endif
