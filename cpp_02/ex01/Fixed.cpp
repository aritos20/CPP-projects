/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:31:53 by agianico          #+#    #+#             */
/*   Updated: 2022/08/01 15:09:22 by agianico         ###   ########.fr       */
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
    _fixed_point_number = value * 256;
}

Fixed::Fixed( const float f_value )
{
    std::cout << "Float constructor called" << std::endl;
	_fixed_point_number = roundf(f_value * 256);
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
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
    return (float)_fixed_point_number / 256;
}

int Fixed::toInt (void) const
{
    return _fixed_point_number / 256;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}