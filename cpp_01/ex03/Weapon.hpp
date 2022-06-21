/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:08 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:43:09 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string nameWeapon);
    ~Weapon();

    std::string getType() const;
    void        setType(std::string newType);
};


#endif