/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:28 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 20:26:39 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{}

Karen::~Karen( void )
{}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!." << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!." << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deerve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	void		(Karen::*funcPtr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	complainLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (complainLevels[i] == level)
		{
			(this->*funcPtr[i])();
			return;
		}
	}
	std::cout <<  "Wrong argument" << std::endl;
}