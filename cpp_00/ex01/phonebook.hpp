/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:04:15 by agianico          #+#    #+#             */
/*   Updated: 2021/07/13 16:48:05 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include "contact.hpp"

class PhoneBook
{
	public:
		Contact list[8];
};

void	add_contact(Contact list[8], int i);
void	replace_contact(Contact list[8]);
void	print_things(std::string str);
void	print_info(Contact list[8], int index);
bool	isNumber(std::string val);
void	search_contacts(Contact list[8], int contact_numbers);

#endif