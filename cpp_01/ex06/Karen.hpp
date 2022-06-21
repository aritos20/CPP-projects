/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:46 by agianico          #+#    #+#             */
/*   Updated: 2022/06/21 19:43:47 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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