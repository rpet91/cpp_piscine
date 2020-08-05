/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:44:19 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/05 12:51:39 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*brainPtr = &brain;
	std::string		&brainRef = brain;

	std::cout << "Ptr: " << *brainPtr << std::endl;
	std::cout << "Ref: " << brainRef << std::endl;
	return (0);
}
