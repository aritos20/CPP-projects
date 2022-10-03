/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:11:20 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 15:26:23 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal( const Animal &src );
		virtual ~Animal();

		Animal &operator=( const Animal &other );

		virtual void	makeSound( void ) const;

		const std::string &getType( void ) const;
	protected:
		std::string	type;
};

#endif