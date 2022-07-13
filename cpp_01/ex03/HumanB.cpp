/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:42:15 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 19:38:22 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}
HumanB::~HumanB()
{

}
void    HumanB::attack()
{
    if (!this->weapon)
    {
        std::cout << "HumanB does not have a weapon so he attacks with his hands" << std::endl;
        return;
    }
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}