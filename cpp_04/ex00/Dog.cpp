/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:13:33 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 13:15:55 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog deafult constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog &src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;;
}

Dog &Dog::operator=( const Dog &other )
{
	std::cout << "Dog Assignation operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "The " << this->getType() << " makes Wooof Wooof" << std::endl;
}