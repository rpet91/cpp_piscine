/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 11:28:36 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/20 07:21:13 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <exception>
#include <climits>
#include <vector>

// Test from the subject.
void	subjectTest()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

// Test where I try to call shortest and longest span with too few numbers added
void	rangeTest()
{
	Span	range = Span(5);

	try
	{
		std::cout << range.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << range.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
}

// Test where I try to add a number when the limit has been reached
void	fullTest()
{
	Span	full = Span(3);

	for (int i = 0; i < 4; i++) // I try to add four numbers and the size is three
	{
		try
		{
			full.addNumber(42 + i);
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;
}

// Test where I add the smallest and biggest number to show it can handle it
void	intminmaxTest()
{
	Span	minmax = Span(3);

	minmax.addNumber(INT_MAX);
	minmax.addNumber(INT_MIN);
	minmax.addNumber(0);

	std::cout << "Shortest range: " << minmax.shortestSpan() << std::endl;
	std::cout << "Longest range: " << minmax.longestSpan() << std::endl;

	std::cout <<  std::endl;
}

// Test where I add a range of iterators and show it works
void	bigTest()
{
	Span						big = Span(10000);
	std::vector<int>			v;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	try
	{
		big.addRange(v.begin(), v.end());
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		big.addNumber(1337); // When I try to add another number it won't work
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout <<  std::endl;
}

int		main()
{
	subjectTest();
	rangeTest();
	fullTest();
	intminmaxTest();
	bigTest();
	return (0);
}
