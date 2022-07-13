/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:42:04 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 19:28:23 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): name(name), weapon(newWeapon)
{}

HumanA::~HumanA()
{}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}