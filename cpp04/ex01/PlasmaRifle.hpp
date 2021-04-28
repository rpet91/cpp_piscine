/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:27 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 11:33:07 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &original);
		PlasmaRifle &operator=(PlasmaRifle const &original);
		virtual ~PlasmaRifle();

		virtual void	attack() const;
		
};

#endif
