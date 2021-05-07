/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/07 10:54:51 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

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
		std::cout << "General error: " << e.what() << std::endl;
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
		std::cout << "General error: " << e.what() << std::endl;
	}

	Form		form3("contract", 50, 150);
	Bureaucrat	jonas("Jonas", 25);

	std::cout << std::endl;
	jonas.signForm(form3);
	jonas.signForm(form3);
}

int		main()
{
	form_test();
	return (0);
}
