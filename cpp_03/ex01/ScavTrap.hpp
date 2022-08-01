/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:44:54 by agianico          #+#    #+#             */
/*   Updated: 2022/08/01 16:13:54 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		// Constructor
		ScavTrap();
		// Copy constructor
		ScavTrap( const ScavTrap &src );
		// Constructor overload
		ScavTrap( std::string name );
		// Destructor
		~ScavTrap();

		// Assign operator overload
		ScavTrap &operator=( const ScavTrap &other);

		// Member functions
		void attack( std::string const &target );
		void guardGate();
};