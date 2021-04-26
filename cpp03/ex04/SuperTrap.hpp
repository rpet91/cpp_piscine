/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/19 14:42:55 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/26 07:29:46 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap {

	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const &original);
		SuperTrap& operator=(SuperTrap const &original);
};

#endif
