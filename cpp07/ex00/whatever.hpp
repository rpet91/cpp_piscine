/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 09:57:11 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/13 11:42:30 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &arg1, T &arg2)
{
	T	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T const &min(T const &arg1, T const &arg2)
{
	return ((arg1 < arg2) ? arg1 : arg2);
}

template <typename T>
T const &max(T const &arg1, T const &arg2)
{
	return ((arg1 > arg2) ? arg1 : arg2);
}

#endif
