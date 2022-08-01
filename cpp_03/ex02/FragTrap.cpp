/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:42:59 by agianico          #+#    #+#             */
/*   Updated: 2022/08/01 19:20:57 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
    this->_name = "default";
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap &src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &other )
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

void FragTrap::attack( std::string const &target )
{
	std::cout << "FragTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "a positive high fives request" << std::endl;
}