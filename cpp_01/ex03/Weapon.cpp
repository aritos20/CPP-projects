/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:04 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:43:05 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string nameWeapon)
{
    this->type = nameWeapon;
}
Weapon::~Weapon()
{

}
const std::string &Weapon::getType()
{
    return this->type;
}
void        Weapon::setType(std::string newType)
{
    this->type = newType;
}