/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:44:41 by agianico          #+#    #+#             */
/*   Updated: 2022/08/01 16:11:14 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    protected:
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