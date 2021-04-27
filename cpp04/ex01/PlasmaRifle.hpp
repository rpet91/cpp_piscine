/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:27 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 14:33:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"
# include <string>

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle(std::string const &name, int apcost, int damage);
		PlasmaRifle(PlasmaRifle const &original);
		PlasmaRifle &operator=(PlasmaRifle const &original);
		virtual ~PlasmaRifle();

		virtual void	attack() const;
		
	private:
		PlasmaRifle();
};

#endif
