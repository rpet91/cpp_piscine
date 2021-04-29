/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:23:43 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 14:47:19 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &original);
		TacticalMarine	&operator=(TacticalMarine const &original);
		virtual ~TacticalMarine();

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
