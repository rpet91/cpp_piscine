/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:40:32 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/10 13:35:01 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "Form.hpp"
# include <string>
# include <exception>

class Form;

class Bureaucrat {

	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat	&operator=(Bureaucrat const &src);
		virtual ~Bureaucrat();		

		std::string const	getName() const;
		int					getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(Form &form) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

	private:
		Bureaucrat();
		
		std::string const	_name;
		int					_grade;

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif
