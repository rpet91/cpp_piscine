/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 07:23:51 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/20 08:44:34 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int const search)
{
	return (find(container.begin(), container.end(), search));
}

#endif
