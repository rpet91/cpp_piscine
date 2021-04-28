/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Slave.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:30:06 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 15:23:46 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLAVE_HPP
# define SLAVE_HPP
# include "Victim.hpp"
# include <string>

class Slave : public Victim {

	public:
		Slave(std::string name);
		Slave(Slave const &orignal);
		Slave	&operator=(Slave const &original);
		~Slave();
		
		virtual void	getPolymorphed() const;
	
	private:
		Slave();
};

#endif
