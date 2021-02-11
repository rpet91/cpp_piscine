/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:02:21 by rpet          #+#    #+#                 */
/*   Updated: 2021/02/11 16:52:53 by rpet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &original);
		Fixed &operator=(Fixed const &original);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

#endif
