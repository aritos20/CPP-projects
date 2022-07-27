/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:10:57 by agianico          #+#    #+#             */
/*   Updated: 2022/07/27 17:05:24 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
	int					_fixed_point_number;
    static const int	_fractional_bits_numbers = 8;

	public:
	// constructor
	Fixed( void );
	// Copy constructor
    Fixed( const Fixed &src );
	// Constructor overloads
	Fixed( const int value );
	Fixed( const float f_value );
	// Destructor
	~Fixed( void );

	// Assign operator overload
    Fixed &operator=( const Fixed &other);

	// Comparison operator overloads
    bool operator>( const Fixed &other) const;
    bool operator<( const Fixed &other) const;
    bool operator>=( const Fixed &other) const;
    bool operator<=( const Fixed &other) const;
    bool operator==( const Fixed &other) const;
    bool operator!=( const Fixed &other) const;

	// Arithmetics operators overloads
    Fixed operator+( const Fixed &other);
    Fixed operator-( const Fixed &other);
    Fixed operator*( const Fixed &other);
    Fixed operator/( const Fixed &other);

	// Increment and decrement operator overloads
	Fixed &operator++( void );
	Fixed operator++( int );
	Fixed &operator--( void );
	Fixed operator--( int );

	// Min and max overloads
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);

	// Getter & Setter
	int     getRawBits( void ) const;
    void    setRawBits( int const raw );

	// Member functions
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &myClass );

#endif