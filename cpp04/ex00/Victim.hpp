/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:33:01 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 11:27:22 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class Victim {

	public:
		Victim(std::string name);
		Victim(Victim const &original);
		Victim &operator=(Victim const &original);
		~Victim(void);

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;
		void			polymorph(Victim const &src) const;

	protected:
		Victim();
		
		std::string		_name;
};

std::ostream &operator<<(std::ostream &os, Victim const &src);

#endif
