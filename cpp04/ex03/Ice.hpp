/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:12:25 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 08:11:09 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(Ice const &original);
		Ice	&operator=(Ice const &original);
		virtual ~Ice();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
