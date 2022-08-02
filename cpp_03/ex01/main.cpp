/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:44:44 by agianico          #+#    #+#             */
/*   Updated: 2022/08/02 14:46:39 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a("aritos");

    a.attack("tuvieja13");
    a.guardGate();
    a.takeDamage(5);
    a.beRepaired(10);
    return (0);
}