/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 08:33:10 by rpet          #+#    #+#                 */
/*   Updated: 2020/07/30 11:25:38 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {

	public:
		Contact(void);
		void	add(void);
		void	show_info(void);
		void	show_list(void);

	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string		_postal_address;
		std::string		_email_address;
		std::string		_phone_number;
		std::string		_birthday_date;
		std::string		_favorite_meal;
		std::string		_underwear_color;
		std::string		_darkest_secret;

		void	shorten_name(std::string name);
};

#endif
