/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/04 14:53:02 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main()
{
	Bureaucrat	remco("Remco", 150);
	std::cout << remco;	
	
	try
	{
		Bureaucrat	mark("Mark", -1337);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "My error: " <<  e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "General error: " << e.what() << std::endl;
	}
	std::cout << "Let's decrement Remco's grade by 1." << std::endl;
	try
	{
		remco.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
