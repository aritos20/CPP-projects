/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:03:25 by agianico          #+#    #+#             */
/*   Updated: 2021/07/13 16:53:14 by agianico         ###   ########.fr       */
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

void	print_things(std::string str)
{
	int i;


	i = 0;
	while(i < 9)
	{
		std::cout << str[i];
		i++;
	}
	std::cout << '.';
}

void	print_info(Contact list[8], int index)
{
	std::cout << "FIRST NAME: " << list[index].get_first_name() << std::endl;
	std::cout << "LAST NAME: " << list[index].get_last_name() << std::endl;
	std::cout << "NICKNAME: " << list[index].get_nickname() << std::endl;
	std::cout << "PHONE NUMBER: " << list[index].get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET: " << list[index].get_darkest_secret() << std::endl;
}

bool	isNumber(std::string val)
{
	int i = 0;
	while(val[i])
	{
		if (std::isdigit(val[i]) == 0)
			return false;
		i++;
	}
	return true;
}

void	search_contacts(Contact list[8], int contact_numbers)
{
	int	j;
	int	index;

	j = 0;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	while(j < contact_numbers)
	{
		std::cout << "|         " << j + 1 << "|";
		if (list[j].get_first_name().length() > 10)
			print_things(list[j].get_first_name());
		else
		{
			for(int i = 0; i < 10 - int(list[j].get_first_name().length()); i++)
				std::cout << ' ';
			std::cout << list[j].get_first_name();
		}
		std::cout << '|';
		if (list[j].get_last_name().length() > 10)
			print_things(list[j].get_last_name());
		else
		{
			for(int i = 0; i < 10 - int(list[j].get_last_name().length()); i++)
				std::cout << ' ';
			std::cout << list[j].get_last_name();
		}
		std::cout << '|';
		if (list[j].get_nickname().length() > 10)
			print_things(list[j].get_nickname());
		else
		{
			for(int i = 0; i < 10 - int(list[j].get_nickname().length()); i++)
				std::cout << ' ';
			std::cout << list[j].get_nickname();
		}
		std::cout << '|' << std::endl;
		j++;
	}
	while (1)
	{
		std::string val;
		std::cout << "Please enter the index number of the contact that you want the information: ";
		getline(std::cin, val);
		if (isNumber(val) == true)
		{
			index = stoi(val);
			if (index > 0 && index < contact_numbers + 1)
			{
				print_info(list, index - 1);
				break ;
			}
			else
				std::cout << "Please enter a valid index" << std::endl;
		}
		else
			std::cout << "Please type only numbers between 1 and 8" << std::endl;
	}
}

int		main()
{
	PhoneBook PhoneBook;
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
				add_contact(PhoneBook.list, i);
				i++;
			}
			else
			{
				replace_contact(PhoneBook.list);
				i = 8;
			}
		}
		else if (input == "SEARCH")
			search_contacts(PhoneBook.list, i);
		else if (input == "EXIT")
		{
			std::cout << "thank you for use my phonebook program" << std::endl;
			break ;
		}
	}
}