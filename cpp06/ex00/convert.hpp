/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:43:56 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/12 11:59:43 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>

typedef enum	e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	INVALID
}				t_type;

void	convertChar(std::string arg);
void	convertInt(std::string arg);
void	convertFloat(std::string arg);
void	convertDouble(std::string arg);
void	convertSpecial(std::string arg);

void	printCharConversion(char c);
void	printConversion(double d);
void	printSpecialConversion(std::string arg);

#endif
