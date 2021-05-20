/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 11:28:20 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/19 14:06:12 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <vector>
#include <stdexcept>

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

Span			&Span::operator=(Span const &src)
{
	this->_maxSize = src._maxSize;
	this->_numbers = src._numbers;
	return (*this);
}

void			Span::addNumber(int number)
{
	if (this->_numbers.size() >= this->_maxSize)
		throw std::runtime_error("Max size has been reached!");
	this->_numbers.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	shortestSpan;

	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Need at least two numbers added!");
	std::sort(this->_numbers.begin(), this->_numbers.end());
	shortestSpan = *(this->_numbers.begin() + 1) - *this->_numbers.begin();
	for (unsigned int i = 1; i < this->_maxSize; i++)
	{
		if (static_cast<unsigned int>(this->_numbers[i] - this->_numbers[i - 1])
				< shortestSpan)
			shortestSpan = this->_numbers[i] - this->_numbers[i - 1];
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan()
{
	unsigned int	longestSpan;

	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Need at least two numbers added!");
	std::sort(this->_numbers.begin(), this->_numbers.end());
	longestSpan = *(this->_numbers.end() - 1) - *this->_numbers.begin();
	return (longestSpan);
}
