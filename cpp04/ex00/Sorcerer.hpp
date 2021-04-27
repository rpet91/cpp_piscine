/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:32:52 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/27 09:38:54 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include "Victim.hpp"
# include <string>

class Sorcerer {

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &original);
		Sorcerer &operator=(Sorcerer const &original);
		~Sorcerer(void);

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &src) const;

	private:
		Sorcerer(void);
		
		std::string		_name;
		std::string		_title;

};

std::ostream &operator<<(std::ostream &os, Sorcerer const &src);

#endif
