/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:31:56 by agianico          #+#    #+#             */
/*   Updated: 2022/07/26 19:24:36 by agianico         ###   ########.fr       */
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

	// = operator overload
    Fixed &operator=( const Fixed &other);

	// Getter & Setter
	int     getRawBits( void ) const;
    void    setRawBits( int const raw );

	// Member functions
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &myClass );

#endif