/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:02:32 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 09:01:36 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include <string>

class Intern {

	public:
		Intern();
		Intern(Intern const &src);
		Intern	&operator=(Intern const &src);
		virtual ~Intern();

		AForm	*makeForm(std::string const &name, std::string const &target) const;

	private:
		AForm	*callShrubberyCreationForm(std::string const &target) const;
		AForm	*callRobotomyRequestForm(std::string const &target) const;
		AForm	*callPresidentialPardonForm(std::string const &target) const;

};

#endif
