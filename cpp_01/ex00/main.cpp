/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:19 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:20 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    std::cout << "Ponle un nombre a tu Zombie:" << std::endl;
    std::getline(std::cin, name);
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    randomChump(name);
    return 0;
}