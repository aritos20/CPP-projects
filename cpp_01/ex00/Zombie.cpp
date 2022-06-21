/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:34 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:35 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "The Zombie has been created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}
void	Zombie::setName(std::string newName)
{
    this->name = newName;
}
void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}