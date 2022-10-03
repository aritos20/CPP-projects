/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:08:24 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 13:17:50 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other )
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "The " << this->getType() << " makes a sound" << std::endl;
}

const std::string &WrongAnimal::getType( void ) const
{
	return(this->type);
}