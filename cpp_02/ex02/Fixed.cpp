/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:10:55 by agianico          #+#    #+#             */
/*   Updated: 2022/07/27 19:01:42 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_number = 0;
}

Fixed::Fixed( const Fixed &src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    _fixed_point_number = value << _fractional_bits_numbers;
}

Fixed::Fixed( const float f_value )
{
    (void)f_value;
    std::cout << "Float constructor called" << std::endl;
	_fixed_point_number = (int)roundf((f_value * (1 << _fractional_bits_numbers)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
}

bool Fixed::operator>(Fixed const &other) const
{
	return getRawBits() > other.getRawBits();
}

bool Fixed::operator<(Fixed const &other) const
{
	return getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(Fixed const &other) const
{
	return getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(Fixed const &other) const
{
	return getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(Fixed const &other) const
{
	return getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(Fixed const &other) const
{
	return getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed fixed;
	fixed.setRawBits(getRawBits() + other.getRawBits());
	return fixed;
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed fixed;
	fixed.setRawBits(getRawBits() - other.getRawBits());
	return fixed;
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed fixed;
	fixed.setRawBits((getRawBits() * other.getRawBits()) >> _fractional_bits_numbers);
	return fixed;
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed fixed;
	fixed.setRawBits((getRawBits() << _fractional_bits_numbers) / other.getRawBits());
	return fixed;
}

Fixed &Fixed::operator++(void)
{
	_fixed_point_number++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed fixed(*this);
	operator++();
	return fixed;
}

Fixed &Fixed::operator--(void)
{
	_fixed_point_number--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed fixed(*this);
	operator--();
	return fixed;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
}

int     Fixed::getRawBits( void ) const
{
    return _fixed_point_number;
}

void    Fixed::setRawBits( int const raw )
{
    _fixed_point_number = raw;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor Called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return ((float)_fixed_point_number / (float)(1 << _fractional_bits_numbers));
}

int Fixed::toInt (void) const
{
    return _fixed_point_number / (1 << _fractional_bits_numbers);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}