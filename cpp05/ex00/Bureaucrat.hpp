/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/04 09:40:32 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/04 11:56:05 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

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

		class GradeTooHighException {

		};

		class GradeTooLowException {

		};

	private:
		Bureaucrat();
		
		std::string		_name;
		int				_grade;

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif
