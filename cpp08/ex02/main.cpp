/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 11:33:50 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/20 08:40:43 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <vector>

void	subjectTest()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
}

void	iteratorsTest()
{
	MutantStack<int>							mstack;

	for (int i = 0; i < 10; i++)
		mstack.push(i * 5);

	MutantStack<int>::iterator					begin = mstack.begin();
	MutantStack<int>::const_iterator			constbegin = mstack.begin();
	MutantStack<int>::iterator					end = mstack.end();
	MutantStack<int>::const_iterator			constend = mstack.end();
	MutantStack<int>::reverse_iterator			rbegin = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator	constrbegin = mstack.rbegin();
	MutantStack<int>::reverse_iterator			rend = mstack.rend();
	MutantStack<int>::const_reverse_iterator	constrend = mstack.rend();

	// Returns an iterator pointing to the first element in the vector.
	std::cout << "Begin: " << *begin << std::endl;
	std::cout << "Const Begin: " << *constbegin << std::endl;
	// Returns an iterator referring to the past-the-end element in the vector.
	std::cout << "End: " << *end << std::endl;
	std::cout << "Const End: " << *constend << std::endl;
	// Returns a reverse iterator pointing to the last element in the vector (i.e., its reverse beginning).
	std::cout << "RBegin: " << *rbegin << std::endl;
	std::cout << "Const RBegin: " << *constrbegin << std::endl;
	// Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (which is considered its reverse end).
	std::cout << "REnd: " << *(rend - 1) << std::endl;
	std::cout << "Const REnd: " << *(constrend - 1) << std::endl;
}

int		main()
{
	subjectTest();
	iteratorsTest();
	return (0);
}
