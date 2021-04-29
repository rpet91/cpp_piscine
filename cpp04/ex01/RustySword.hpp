/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RustySword.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:12 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 11:11:52 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSTYSWORD_HPP
# define RUSTYSWORD_HPP
# include "AWeapon.hpp"

class RustySword : public AWeapon {

	public:
		RustySword();
		RustySword(RustySword const &original);
		RustySword	&operator=(RustySword const &original);
		virtual ~RustySword();

		virtual void	attack() const;
};

#endif
