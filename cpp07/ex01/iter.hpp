/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 11:50:42 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/14 08:35:37 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>

template <typename T>
void	iter(T const *array, size_t const len, void (*func)(T element))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif
