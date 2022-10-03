/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:57:04 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 13:15:46 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &other )
{
	std::cout << "Cat Assignation operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "The " << this->getType() << " makes Meeeeeoww" << std::endl;
}