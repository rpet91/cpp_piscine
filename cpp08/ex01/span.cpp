/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 11:28:20 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/18 13:54:36 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <vector>

Span::Span()
{
}

Span::Span(unsigned int n) : _maxSize(n)
{
}

Span::~Span()
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	this->_n = src._n;
	this->_element = src._element;
	return (*this);
}

void	Span::addNumber(int number)
{
	this->_vector.push_back(number);
}

int		Span::shortestSpan()
{
	return (1337);
}

int		Span::longestSpan()
{
	int		longest;
	
	longest = *std::max_element() - *std::min_element();
	return (longest);
}
