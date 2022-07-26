/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:58:44 by agianico          #+#    #+#             */
/*   Updated: 2022/07/26 18:08:22 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
	// Destructor
	~Fixed( void );

	// Assign operator
    Fixed &operator=( const Fixed &other);

	// Getter & Setter
	int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif