/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 13:33:08 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/03 07:10:01 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"
# include <string>

class Peon : public Victim {

	public:
		Peon(std::string name);
		Peon(Peon const &original);
		Peon &operator=(Peon const &original);
		virtual ~Peon();

		virtual void	getPolymorphed() const;

	private:
		Peon();

};

#endif
