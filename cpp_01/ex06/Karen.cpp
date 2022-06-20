#include "Karen.hpp"

Karen::Karen( void )
{}

Karen::~Karen( void )
{}

std::string	Karen::debug( void )
{
	return "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!.";
}

std::string	Karen::info( void )
{
	return "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!.";
}

std::string	Karen::warning( void )
{
	return "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
}

std::string	Karen::error( void )
{
	return "This is unacceptable, I want to speak to the manager now.";
}

int			Karen::complain(std::string level)
{
	std::string complainLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complainLevels[i] == level)
			return i;
	}
	return -1;
}