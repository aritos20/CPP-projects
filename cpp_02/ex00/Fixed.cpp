#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}