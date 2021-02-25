/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:02:21 by rpet          #+#    #+#                 */
/*   Updated: 2021/02/12 14:21:53 by rpet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &original);
		Fixed &operator=(Fixed const &original);

		Fixed(int const nb);
		Fixed(float const nb);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

std::ostream &operator<<(std::ostream& os, const Fixed& data);

#endif
