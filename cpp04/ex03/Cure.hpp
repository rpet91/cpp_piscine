/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:12:49 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 08:20:50 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(Cure const &original);
		Cure	&operator=(Cure const &original);
		virtual ~Cure();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
