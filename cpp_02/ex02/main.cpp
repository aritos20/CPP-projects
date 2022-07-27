/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:10:59 by agianico          #+#    #+#             */
/*   Updated: 2022/07/27 19:00:36 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c;
	Fixed		d;

	std::cout << "a value is: " << a << std::endl;
	std::cout << "b value is: " << b << std::endl;
	std::cout << "c value is: " << c << std::endl;
	std::cout << "d value is: " << d << std::endl;
	std::cout << "a value is: " << ++a << std::endl;
	c = a + b;
	std::cout << "c value is: " << c << std::endl;
	d = c - a;
	std::cout << "d value is: " << d << std::endl;
	c = d * c;
	std::cout << "c value is: " << c << std::endl;
	d = d / a;
	std::cout << "d value is: " << d << std::endl;
	std::cout << "c value is: " << --c << std::endl;
	c++;
	std::cout << "c value is: " << c << std::endl;
	d--;
	d--;
	std::cout << "d value is: " << d << std::endl;

	std::cout << "Max value is: " <<  Fixed::max( a, b ) << std::endl;
	std::cout << "Min value is: " <<  Fixed::min( a, b ) << std::endl;
	std::cout << "Max value is: " << Fixed::max(c, d) << std::endl;
	std::cout << "Min value is: " << Fixed::min(c, d) << std::endl;

	return 0;
}