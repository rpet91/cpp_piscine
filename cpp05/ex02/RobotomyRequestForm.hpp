/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 13:33:06 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 14:42:03 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm();

	private:
		RobotomyRequestForm();

		std::string const	_target;

};

#endif
