/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:03:25 by agianico          #+#    #+#             */
/*   Updated: 2021/06/17 17:49:27 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string input;

	while (1)
	{
		std::cout << "Please use one of the three option availables ADD, SEARCH and EXIT: ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "hola que tal" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "que pasa loko" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout << "thank you for use my phonebook program" << std::endl;
			break ;
		}
	}
}