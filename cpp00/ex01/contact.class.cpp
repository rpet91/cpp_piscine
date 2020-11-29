/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:57:25 by rpet          #+#    #+#                 */
/*   Updated: 2020/11/29 12:46:42 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

void    Contact::_fill_data(std::string question, std::string *answer)
{
	if (std::cin.eof())
		return ;
	std::cout << question;
	std::getline(std::cin, *answer);
}

void	Contact::add(void)
{
	std::cout << "Adding a new contact..." << std::endl;
	_fill_data("Insert first name: ", &(this->_first_name));
	_fill_data("Insert last name: ", &(this->_last_name));
	_fill_data("Insert nickname: ", &(this->_nickname));
	_fill_data("Insert login: ", &(this->_login));
	_fill_data("Insert postal address: ", &(this->_postal_address));
	_fill_data("Insert email address: ", &(this->_email_address));
	_fill_data("Insert phone number: ", &(this->_phone_number));
	_fill_data("Insert birthday date: ", &(this->_birthday_date));
	_fill_data("Insert favorite meal: ", &(this->_favorite_meal));
	_fill_data("Insert underwear color: ", &(this->_underwear_color));
	_fill_data("Insert darkest secret: ", &(this->_darkest_secret));
}

void	Contact::show_info(void) const
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

void    Contact::_shorten_name(std::string name) const
{
    std::cout << '|';
    if (name.length() > 10)
    {
        name.resize(9);
        name += ".";
    }
    std::cout << std::right << std::setw(10) << name;
}

void	Contact::show_list(void) const
{
    _shorten_name(this->_first_name);
    _shorten_name(this->_last_name);
    _shorten_name(this->_nickname);
    std::cout << std::endl;
}
