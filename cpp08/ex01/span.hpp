/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 11:28:05 by rpet          #+#    #+#                 */
/*   Updated: 2021/05/18 13:54:15 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span {

	public:
		Span(unsigned int n);
		virtual ~Span();
		Span(Span const &src);
		Span	&operator=(Span const &src);

		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

	private:
		Span();
	
		unsigned int		_maxSize;
		std::vector<int>	_vector;
};

#endif
