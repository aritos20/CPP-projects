/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:42:15 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:42:16 by agianico         ###   ########.fr       */
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
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}