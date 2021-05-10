/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:30:42 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 09:13:32 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cerrno>

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("Shrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	AForm("Shrubbery Creation Form", 145, 137), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	AForm::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::_performAction() const
{
	std::string		fileName = this->_target + "_shrubbery";
	std::ofstream	outputFile;
	
	outputFile.open(fileName);
	if (!outputFile)
	{
		std::cout << std::strerror(errno) << std::endl;
		return ;
	}
	outputFile
		<< "       69696969                       69696969" << std::endl
		<< "    6969    696969                 696969    6969" << std::endl
		<< "  969    69  6969696             6969  6969     696" << std::endl
		<< " 969        696969696           696969696969     696" << std::endl
		<< "969        69696969696         6969696969696      696" << std::endl
		<< "696      9696969696969         969696969696       969" << std::endl
		<< " 696     696969696969           969696969        969" << std::endl
		<< "  696     696  96969             9696969  69    696" << std::endl
		<< "    9696    969696                 696969    6969" << std::endl
		<< "       96969696                       69696969" << std::endl
		<< "          96                             69" << std::endl
		<< "          69                             96" << std::endl
		<< "         6969                           9696" << std::endl;
	outputFile.close();
}
