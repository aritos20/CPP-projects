/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:44:38 by agianico          #+#    #+#             */
/*   Updated: 2022/08/02 14:15:40 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->_name = "default";
    this->_hitpoints = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::ClapTrap( std::string name )
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

void ClapTrap::attack( std::string const &target )
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_hitpoints < 0)
    {
        std::cout << "ClapTrap " << this->_name << " can`t receive damage because has 0 hitpoints" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " has received " << amount << " points of damage" << std::endl;
    this->_hitpoints = this->_hitpoints - amount;
    if (this->_hitpoints < 0)
        std::cout << "ClapTrap " << _name << " is dead after this attack" << std::endl;
    else
        std::cout << "Now ClapTrap " << this->_name << " has " << this->_hitpoints << " total hitpoints" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_energy_points < 2)
    {
        std::cout << "ClapTrap " << _name << " cant`t be repaired because it doesn`t have enough energy points(min 2 energy points)" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " has been repaired for " << amount << " hitpoints" << std::endl;
    this->_energy_points -= 2;
    this->_hitpoints = this->_hitpoints + amount;
    std::cout << "Now ClapTrap " << this->_name << " has " << this->_hitpoints << " total hitpoints and " << this->_energy_points << " energy points" << std::endl;
}
