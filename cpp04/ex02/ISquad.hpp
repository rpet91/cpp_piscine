/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:24:34 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/29 13:33:43 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad {

	public:
		virtual	~ISquad() {}
		virtual	int	getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif
