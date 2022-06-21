/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:42:08 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:42:09 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string name, Weapon &newWeapon);
    ~HumanA();

    void    attack();
};

#endif