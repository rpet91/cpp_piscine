/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:25:06 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/06 12:12:38 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <cstdbool>

class Bureaucrat;

class Form {

	public:
		Form(std::string const &name, int const signGrade, int const execGrade);
		Form(Form const &src);
		Form	&operator=(Form const &src);
		virtual ~Form();

		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat const &src);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

	private:
		Form();

		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int	const			_execGrade;

};

std::ostream	&operator<<(std::ostream &os, Form const &src);

#endif
