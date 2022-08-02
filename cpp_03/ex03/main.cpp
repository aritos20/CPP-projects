/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:44:11 by agianico          #+#    #+#             */
/*   Updated: 2022/08/02 14:40:54 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("aritos");

	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();
	a.attack("tuvieja13");
	return (0);
}
