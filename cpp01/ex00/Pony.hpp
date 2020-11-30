/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:56:58 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/30 11:46:30 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	public:
		Pony(std::string pony);
		~Pony(void);
		void	feed(void);
		void	run(void);
		void	pet(void);
		void	ride(void);

	private:
		std::string		_name;
};

#endif
