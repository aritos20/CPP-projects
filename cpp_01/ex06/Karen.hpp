#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
public:
	Karen( void );
	~Karen( void );
	std::string	debug(void);
	std::string	info(void);
	std::string	warning(void);
	std::string	error(void);
	int			complain(std::string level);
};

#endif