/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:36 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 20:31:08 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void )
{
	Karen	karen;
	std::string complain_level;

	std::cout << "Poner un nivel de queja: ";
	std::getline(std::cin, complain_level);
	karen.complain(complain_level);
}