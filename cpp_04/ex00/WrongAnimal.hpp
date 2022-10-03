/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:01:37 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 13:03:20 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		~WrongAnimal();

		WrongAnimal &operator=( const WrongAnimal &other );

		void	makeSound( void ) const;

		const std::string &getType( void ) const;
	protected:
		std::string	type;
};

#endif