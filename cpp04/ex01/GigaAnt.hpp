/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   GigaAnt.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:44:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 07:14:23 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GIGAANT_HPP
# define GIGAANT_HPP
# include "Enemy.hpp"

class GigaAnt : public Enemy {

	public:
		GigaAnt();
		GigaAnt(GigaAnt const &original);
		GigaAnt	&operator=(GigaAnt const &original);
		virtual ~GigaAnt();

		virtual void	takeDamage(int dmg);
};

#endif
