/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:56:51 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 14:33:00 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>

class Human
{
	public:
		Human(void);
		~Human(void);
		Brain const		&getBrain(void) const;
		std::string		identify(void) const;

	private:
		Brain const		_brain;
};

#endif
