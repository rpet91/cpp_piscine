/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 11:50:42 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/13 13:49:59 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T const array, size_t const len, void function)
{
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}

#endif
