/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/07 11:35:17 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <exception>

void	execute_scf()
{
	Bureaucrat				gg("Good Grade", 136);
	Bureaucrat				mg("Mid Grade", 138);
	Bureaucrat				bg("Bad Grade", 148);
	ShrubberyCreationForm	scf1("Nikander");
	ShrubberyCreationForm	scf2("Lisa");
	ShrubberyCreationForm	scf3("Hester");

	// Testing with a grade LOWER than sign and LOWER than exec
	gg.executeForm(scf1);
	gg.signForm(scf1);
	gg.executeForm(scf1);

	std::cout << std::endl;

	// Testing with a grade LOWER than sign and HIGHER than exec
	mg.executeForm(scf2);
	mg.signForm(scf2);
	mg.executeForm(scf2);
	
	std::cout << std::endl;

	// Testing with a grade HIGHER than sign and HIGHER than exec
	bg.executeForm(scf3);
	bg.signForm(scf3);
	bg.executeForm(scf3);
}

void	execute_rrf()
{
	Bureaucrat				gg("Good Grade", 44);
	Bureaucrat				mg("Mid Grade", 69);
	Bureaucrat				bg("Bad Grade", 73);
	RobotomyRequestForm		rrf1("Abel");
	RobotomyRequestForm		rrf2("Ingmar");
	RobotomyRequestForm		rrf3("Laura");

	// Testing with a grade LOWER than sign and LOWER than exec
	gg.executeForm(rrf1);
	gg.signForm(rrf1);
	gg.executeForm(rrf1);

	std::cout << std::endl;

	// Testing with a grade LOWER than sign and HIGHER than exec
	mg.executeForm(rrf2);
	mg.signForm(rrf2);
	mg.executeForm(rrf2);
	
	std::cout << std::endl;

	// Testing with a grade HIGHER than sign and HIGHER than exec
	bg.executeForm(rrf3);
	bg.signForm(rrf3);
	bg.executeForm(rrf3);
}

void	execute_ppf()
{
	Bureaucrat				gg("Good Grade", 4);
	Bureaucrat				mg("Mid Grade", 20);
	Bureaucrat				bg("Bad Grade", 26);
	PresidentialPardonForm	ppf1("Mark");
	PresidentialPardonForm	ppf2("Rixt");
	PresidentialPardonForm	ppf3("Lars");

	// Testing with a grade LOWER than sign and LOWER than exec
	gg.executeForm(ppf1);
	gg.signForm(ppf1);
	gg.executeForm(ppf1);

	std::cout << std::endl;

	// Testing with a grade LOWER than sign and HIGHER than exec
	mg.executeForm(ppf2);
	mg.signForm(ppf2);
	mg.executeForm(ppf2);
	
	std::cout << std::endl;

	// Testing with a grade HIGHER than sign and HIGHER than exec
	bg.executeForm(ppf3);
	bg.signForm(ppf3);
	bg.executeForm(ppf3);
}

int		main()
{
	execute_scf(); // ShrubberyCreationForm
	//execute_rrf(); // RobotomyRequestForm
	//execute_ppf(); // PresidentialPardonForm
	return (0);
}
