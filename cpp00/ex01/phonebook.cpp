/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:17 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/22 12:38:35 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

void	process_list(Contact contact[8], int contact_amount)
{
	int		cur_index = 0;

	std::cout << "\033[4m     index|first name| last name|  nickname\33[0m"
		<< std::endl;
	while (cur_index < 8)
	{
		if (cur_index < contact_amount)
		{
			std::cout << std::right << std::setw(10) << cur_index + 1;
			contact[cur_index].show_list();
		}
		else
			std::cout << "----------|----------|----------|----------" << std::endl;
		cur_index++;
	}
}

void	search(Contact contact[8], int contact_amount)
{
	std::string		arg;
	int				index_choice;

	process_list(contact, contact_amount);
	std::cout << "From which contact would you like to see more info?: ";
	std::getline(std::cin, arg);
	if (std::cin.eof())
		return ;
	if (arg.length() != 1 || !std::isdigit(arg[0]) || arg[0] == '0')
		std::cout << "Please give a valid index number." << std::endl;
	else	
	{
		index_choice = arg[0] - '0';
		if (index_choice > contact_amount)
			std::cout << "Please pick a number not higher than " << 
				contact_amount << '.' << std::endl;
		else
			contact[index_choice - 1].show_info();
	}
}

std::string		input_toupper(std::string arg)
{
	for (int i = 0; arg[i]; i++)
		arg[i] = std::toupper(arg[i]);
	return (arg);
}

int		main(void)
{
	Contact			contact[8];
	std::string		arg;
	int				contact_amount = 0;

	while (true)
	{
		std::cout << "What would you like to do? (ADD/SEARCH/EXIT): ";
		std::getline(std::cin, arg);
		if (input_toupper(arg) == "ADD")
		{
			if (contact_amount >= 8)
				std::cout << "Phonebook is full, you can't add more." << std::endl;
			else
				contact[contact_amount++].add();
		}
		if (input_toupper(arg) == "SEARCH")
		{
			if (contact_amount == 0)
				std::cout << "You need to have at least one contact." << std::endl;
			else
				search(contact, contact_amount);
		}
		if (input_toupper(arg) == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}
