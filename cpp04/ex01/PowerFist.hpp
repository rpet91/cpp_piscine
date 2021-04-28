/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:44 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 11:55:36 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist();
		PowerFist(PowerFist const &original);
		PowerFist	&operator=(PowerFist const &original);
		virtual ~PowerFist();

		virtual void	attack() const;
};

#endif
