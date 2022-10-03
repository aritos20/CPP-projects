/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:07:08 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 13:15:35 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal &src )
{
	std::cout << "Animal default constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=( const Animal &other )
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "The " << this->getType() << " make a sound" << std::endl;
}

const std::string &Animal::getType( void ) const
{
	return (this->type);
}

