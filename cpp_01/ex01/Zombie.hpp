/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:52 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 19:19:57 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
	std::string name;

	public:
	Zombie();
	~Zombie();

	void	setName(std::string newName);

	void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif