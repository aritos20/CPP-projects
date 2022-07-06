/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:55 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:56 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombieHorde[i].setName(name);
        zombieHorde[i].announce();
    }
    return zombieHorde;
}