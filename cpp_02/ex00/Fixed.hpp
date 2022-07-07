#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
	int     fixed_point_number;
    static const int fractional_bits_numbers = 8;

	public:
	Fixed();
    Fixed( const Fixed &src );
	~Fixed();
    Fixed &operator=( const Fixed &other);

	int     getRawBits( void ) const;
    void    setRawBits( int const raw);
};

#endif