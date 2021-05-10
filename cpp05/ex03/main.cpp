/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:24:39 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 09:16:03 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <exception>

void	intern_test()
{
	Intern		internCreator;
	AForm		*scf;
	AForm		*rrf;
	AForm		*ppf;
	AForm		*mmf;

	scf = internCreator.makeForm("ShrubberyCreationForm", "SCF works");
	rrf = internCreator.makeForm("RobotomyRequestForm", "RRF works");
	ppf = internCreator.makeForm("PresidentialPardonForm", "PPF works");
	mmf = internCreator.makeForm("MillionMakerForm", "MMF doesn't work");

	delete ppf;
	delete rrf;
	delete scf;
}

int		main()
{
	intern_test();
	//test for leaks
	//while (1);
	return (0);
}
