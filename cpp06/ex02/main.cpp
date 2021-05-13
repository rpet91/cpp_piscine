/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 07:32:58 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/13 09:46:53 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base::~Base()
{
}

void	identify_from_reference(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "A reference" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}

	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "B reference" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}

	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "C reference" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
}

void	identify_from_pointer(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A pointer" << std::endl;
	if (b)
		std::cout << "B pointer" << std::endl;
	if (c)
		std::cout << "C pointer" << std::endl;
}

Base	*generate()
{
	int		randomBase = rand() % 3;

	if (randomBase == 0)
	{
		std::cout << "A generated" << std::endl;
		return (dynamic_cast<Base *>(new A));
	}
	else if (randomBase == 1)
	{
		std::cout << "B generated" << std::endl;
		return (dynamic_cast<Base *>(new B));
	}
	std::cout << "C generated" << std::endl;
	return (dynamic_cast<Base *>(new C));
}

int		main()
{
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		Base	*base = generate();

		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}
