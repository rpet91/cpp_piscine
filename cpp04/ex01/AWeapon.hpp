/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 13:44:14 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon {

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &original);
		AWeapon &operator=(AWeapon const &original);
		virtual ~AWeapon();

		std::string const	&getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;

	protected:
		std::string			_name;
		int					_apcost;
		int					_damage;

	private:
		AWeapon();
};

#endif
