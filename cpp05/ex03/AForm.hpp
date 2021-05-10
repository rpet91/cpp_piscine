/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:25:06 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/07 10:51:33 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <cstdbool>

class Bureaucrat;

class AForm {

	public:
		AForm(std::string const &name, int const signGrade, int const execGrade);
		AForm(AForm const &src);
		AForm	&operator=(AForm const &src);
		virtual ~AForm();

		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat const &src);

		void				execute(Bureaucrat const &executor) const;
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class AlreadySignedException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};
		
		class NotSignedException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

	private:
		AForm();

		virtual void		_performAction() const = 0;

		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int	const			_execGrade;

};

std::ostream	&operator<<(std::ostream &os, AForm const &src);

#endif
