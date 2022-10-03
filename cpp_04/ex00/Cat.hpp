/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:51:15 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 15:17:15 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat( const Cat &src );
		~Cat();

		Cat &operator=( const Cat &other );

		void makeSound( void ) const;
};

#endif