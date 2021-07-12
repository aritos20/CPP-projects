/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:03:25 by agianico          #+#    #+#             */
/*   Updated: 2021/07/12 18:58:56 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	add_contact(Contact list[8], int i)
{
	std::string val;

	std::cout << "please type a first name: ";
	getline(std::cin, val);
	list[i].set_first_name(val);
	std::cout << "please type a last name: ";
	getline(std::cin, val);
	list[i].set_last_name(val);
	std::cout << "please type a nickname: ";
	getline(std::cin, val);
	list[i].set_nickname(val);
	std::cout << "please type a phone number: ";
	getline(std::cin, val);
	list[i].set_phone_number(val);
	std::cout << "please type a darkest secret: ";
	getline(std::cin, val);
	list[i].set_darkest_secret(val);
}

void	replace_contact(Contact list[8])
{
	for (int i = 0; i < 7; i++)
	{
		list[i].set_first_name(list[i + 1].get_first_name());
		list[i].set_last_name(list[i + 1].get_last_name());
		list[i].set_nickname(list[i + 1].get_nickname());
		list[i].set_phone_number(list[i + 1].get_phone_number());
		list[i].set_darkest_secret(list[i + 1].get_darkest_secret());
	}
	add_contact(list, 7);
}

void	print_info(Contact list[8])
{
	int i;

	i = 0;
	while(i < 9)
		std:cout
}

void	search_contacts(Contact list[8], int contact_numbers)
{
	int	j;

	j = 0;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	while(j < contact_numbers)
	{
		std::cout << "|        " << j + 1 << "|";
		if (list[j].get_first_name().length() < 10)
			print_info(list);
	}
}

int		main()
{
	Contact list[8];
	std::string input;
	int	i;

	i = 0;
	while (1)
	{
		std::cout << "Please use one of the three option availables ADD, SEARCH and EXIT: ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (i < 8)
			{
				add_contact(list, i);
				i++;
			}
			else
			{
				replace_contact(list);
				i = 7;
			}
			//std::cout << list[0].get_first_name() << std::endl;
			//std::cout << list[1].get_first_name() << std::endl;
			//std::cout << list[2].get_first_name() << std::endl;
			//std::cout << list[3].get_first_name() << std::endl;
			//std::cout << list[4].get_first_name() << std::endl;
			//std::cout << list[5].get_first_name() << std::endl;
			//std::cout << list[6].get_first_name() << std::endl;
			//std::cout << list[7].get_first_name() << std::endl;
		}
		else if (input == "SEARCH")
		{
			search_contacts(list, i);
		}
		else if (input == "EXIT")
		{
			std::cout << "thank you for use my phonebook program" << std::endl;
			break ;
		}
	}
}