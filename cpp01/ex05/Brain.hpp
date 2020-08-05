/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:55:45 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 14:32:58 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		std::string		identify(void) const;
};

#endif
