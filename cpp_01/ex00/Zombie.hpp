/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:04:47 by agianico          #+#    #+#             */
/*   Updated: 2021/08/10 18:57:56 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>

class	Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name="");
		~Zombie();
		void announce(void);
};

#endif