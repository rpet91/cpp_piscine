/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/05 08:13:28 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main()
{
	std::cout << "Creating a new Bureaucrat \"Mark\":" << std::endl;
	try
	{
		Bureaucrat	mark("Mark", 0);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "My error: " <<  e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "General error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat	remco("Remco", 150);
	std::cout << remco;	
	std::cout << "Let's decrement Remco's grade by 1." << std::endl;
	try
	{
		remco.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "My error: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "General error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Let's increment Remco's grade by 1." << std::endl;
	try
	{
		remco.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "My error: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "General error: " << e.what() << std::endl;
	}
	std::cout << remco;
	std::cout << "No error occurred, big yay." << std::endl;
	return (0);
}
