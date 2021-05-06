/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:49:24 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

void	bureaucrat_test()
{
	std::cout << "Creating a new Bureaucrat \"Mark\":" << std::endl;
	try
	{
		Bureaucrat	mark("Mark", 0);
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
}

void	form_test()
{
	Form		form1("paper", 69, 150);
	Bureaucrat	remco("Remco", 69);

	std::cout << remco << form1;
	try
	{
		remco.signForm(form1);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "My error: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std:: cout << "General error: " << e.what() << std::endl;
	}
	std::cout << form1;

	std::cout << std::endl;

	Form		form2("ticket", 20, 150);
	Bureaucrat	ingmar("Ingmar", 21);

	std::cout << ingmar << form2;
	try
	{
		ingmar.signForm(form2);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "My error: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std:: cout << "General error: " << e.what() << std::endl;
	}
}

void	execute_test()
{
}

int		main()
{
	//bureaucrat_test();
	//form_test();
	execute_test();
	return (0);
}
