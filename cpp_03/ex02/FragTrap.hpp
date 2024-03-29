/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:43:31 by agianico          #+#    #+#             */
/*   Updated: 2022/08/01 19:20:20 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		// Constructor
		FragTrap();
		// Copy constructor
		FragTrap( const FragTrap &src );
		// Constructor overload
		FragTrap( std::string name );
		// Destructor
		~FragTrap();

		// Assign operator overload
		FragTrap &operator=( const FragTrap &other);

		// Member functions
		void attack( std::string const &target );
		void highFivesGuys(void);

};