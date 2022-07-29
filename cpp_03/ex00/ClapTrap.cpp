#include "Claptrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    _hitpoints = 10;
    _energy_points = 10;
    _attack_damage = 0; 
}

// ClapTrap::ClapTrap( const ClapTrap &src )
// {
//     *this = src;
// }

ClapTrap::ClapTrap( std::string name )
{
    this->_name = name;
    _hitpoints = 10;
    _energy_points = 10;
    _attack_damage = 0; 
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack( std::string const &target )
{
    std::cout << "ClapTrap " << _name << " attack " << target << " causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap " << _name << " has received " << amount << " amount of damage" << std::endl;
    _hitpoints = _hitpoints - amount;
    std::cout << "Now ClapTrap " << _name << " has " << _hitpoints << " total hitpoints" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << "ClapTrap " << _name << " has been repaired for " << _hitpoints << " hitpoints" << std::endl;
    _hitpoints = _hitpoints + amount;
    std::cout << "Now ClapTrap " << _name << " has been repaired for " << _hitpoints << " total hitpoints" << std::endl;
}
