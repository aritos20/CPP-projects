/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:50 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:43:51 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;
	int complain = karen.complain(argv[1]);

	if (argc == 2)
	{
		switch(complain)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl << karen.debug() << std::endl;
			break;
			case 1:
				std::cout << "[ INFO ]" << std::endl << karen.info() << std::endl;
			break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl << karen.warning() << std::endl;
			break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl << karen.error() << std::endl;
			break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}