/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:39:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy {

	public:
		RadScorpion();
		RadScorpion(RadScorpion const &original);
		RadScorpion	&operator=(RadScorpion const &original);
		~RadScorpion();

		virtual void	takeDamage(int dmg);
};

#endif
