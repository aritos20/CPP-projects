#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int         _hitpoints;
        int         _energy_points;
        int         _attack_damage;

    public:
        // Constructor
        ClapTrap();
        // Copy Construtor
        ClapTrap( const ClapTrap &src );
        // Constructor overload
        ClapTrap( std::string name );
        // Destructor
        ~ClapTrap();

        // Assign operator overload
        ClapTrap &operator=( const ClapTrap &other);

        // Member functions
        void    attack( std::string const &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif