/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:30:36 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 09:13:41 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <string>

class ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm();

	private:
		ShrubberyCreationForm();

		void				_performAction() const;

		std::string const	_target;

};

#endif
