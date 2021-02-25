/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:02:36 by rpet          #+#    #+#                 */
/*   Updated: 2021/02/16 16:18:51 by rpet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fixedValue (0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
	return ;
}

Fixed &Fixed::operator=(Fixed const &original)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = original.getRawBits();
	return (*this);
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = nb * (1 << this->_fractionalBits);
	return ;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(nb * (1 << this->_fractionalBits));
	return ;
}

std::ostream &operator<<(std::ostream& os, const Fixed& data)
{
	os << data.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	float	ret;

	ret = ((float)this->_fixedValue / (1 << this->_fractionalBits));
	return (ret);
}

int		Fixed::toInt(void) const
{
	return (this->_fixedValue >> this->_fractionalBits);
}
