/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 11:28:05 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/19 14:48:20 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>

class Span {

	public:
		Span(unsigned int n);
		virtual ~Span();
		Span(Span const &src);
		Span	&operator=(Span const &src);

		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template <typename Iterator>
		void			addRange(Iterator start, Iterator end)
		{
			if (static_cast<unsigned int>(end - start) > this->_maxSize - this->_numbers.size())
				throw std::runtime_error("This will overflow the max size!");
			this->_numbers.insert(this->_numbers.end(), start, end);
		}

	private:
		Span();
	
		unsigned int		_maxSize;
		std::vector<int>	_numbers;
};

#endif
