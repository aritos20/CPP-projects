/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:44:15 by agianico          #+#    #+#             */
/*   Updated: 2022/08/02 17:34:37 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;

	public:
		// Constructor
		DiamondTrap();
		// Copy constructor
		DiamondTrap( const DiamondTrap &src );
		// Constructor overload
		DiamondTrap( std::string name );
		// Destructor
		~DiamondTrap();

		// Assignation operator overload
		DiamondTrap &operator=( const DiamondTrap &other );

		// Member functions
		void	attack( std::string const &target );
		void	whoAmI();

};