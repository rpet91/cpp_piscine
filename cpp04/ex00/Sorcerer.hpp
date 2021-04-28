/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:32:52 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 15:24:24 by rpet          ########   odam.nl         */
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
		~Sorcerer();

		std::string		getName() const;
		std::string		getTitle() const;
		void			polymorph(Victim const &src) const;

	private:
		Sorcerer();
		
		std::string		_name;
		std::string		_title;

};

std::ostream &operator<<(std::ostream &os, Sorcerer const &src);

#endif
