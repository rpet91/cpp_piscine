/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:23:27 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 07:16:05 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

	public:
		Squad();
		Squad(Squad const &original);
		Squad	&operator=(Squad const &original);
		virtual ~Squad();

		int				getCount() const;
		ISpaceMarine	*getUnit(int unit) const;
		int				push(ISpaceMarine *unit);

	private:
		int				_count;
		ISpaceMarine	**_marines;

		void			_deleteUnits();

};

#endif
