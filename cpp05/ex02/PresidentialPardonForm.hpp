/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:33:23 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:45:41 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <string>

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm();

	private:
		PresidentialPardonForm();

		std::string const	_target;

};

#endif
