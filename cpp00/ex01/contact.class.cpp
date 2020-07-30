/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:57:25 by rpet          #+#    #+#                 */
/*   Updated: 2020/07/30 11:25:10 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

Contact::Contact(void)
{
	return;
}

void	Contact::add(void)
{
	std::cout << "Adding a new contact..." << std::endl;
	std::cout << "Insert first name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Insert last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Insert nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Insert login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Insert postal address: ";
	std::getline(std::cin, this->_postal_address);
	std::cout << "Insert email address: ";
	std::getline(std::cin, this->_email_address);
	std::cout << "Insert phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Insert birthday date: ";
	std::getline(std::cin, this->_birthday_date);
	std::cout << "Insert favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);
	std::cout << "Insert underwear color: ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "Insert darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}

void	Contact::show_info(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postal_address << std::endl;
	std::cout << "Email address: " << this->_email_address << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Birthday date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void    Contact::shorten_name(std::string name)
{
    std::cout << '|';
    if (name.length() > 10)
    {
        name.resize(9);
        name.resize(10, '.');
    }
    std::cout << std::right << std::setw(10) << name;
}

void	Contact::show_list(void)
{
    shorten_name(this->_first_name);
    shorten_name(this->_last_name);
    shorten_name(this->_nickname);
    std::cout << std::endl;
}
