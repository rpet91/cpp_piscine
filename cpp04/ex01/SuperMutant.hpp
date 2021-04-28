/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 12:00:10 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:00:32 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"
# include <string>

class SuperMutant : public Enemy {

	public:
		SuperMutant();
		SuperMutant(SuperMutant const &original);
		SuperMutant	&operator=(SuperMutant const &original);
		virtual ~SuperMutant();

		virtual void	takeDamage(int dmg);
};

#endif
