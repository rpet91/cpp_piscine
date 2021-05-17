/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/14 08:51:57 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/17 11:45:45 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>

template <typename T>
class Array {

	public:
		Array() : _amountElements(0)
		{
			this->_element = new T[this->_amountElements]();
		}
		Array(unsigned int n) : _amountElements(n)
		{
			this->_element = new T[this->_amountElements]();
		}
		Array(Array const &src)
		{
			this->_amountElements = src._amountElements;
			this->_element = new T[src._amountElements];
			for (unsigned int i = 0; i < src._amountElements; i++)
				this->_element[i] = src._element[i];
		}
		virtual ~Array()
		{
			deleteElement();
		}

		Array	&operator=(Array const &src)
		{
			deleteElement();
			this->_amountElements = src._amountElements;
			this->_element = new T[src._amountElements];
			for (unsigned int i = 0; i < this->_amountElements; i++)
				this->_element[i] = src._element[i];
			return (*this);
		} 
		T		&operator[](unsigned int elementNb) const
		{
			if (elementNb >= this->_amountElements)
				throw std::exception();
			return (this->_element[elementNb]);
		}
		unsigned int	size() const
		{
			return (this->_amountElements);
		}

	private:
		void	deleteElement()
		{
			delete [] this->_element;
		}

		unsigned int	_amountElements;
		T				*_element;
};

#endif
