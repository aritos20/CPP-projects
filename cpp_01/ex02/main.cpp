/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:59 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 19:23:59 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "String address:\nStr = " << &str << "\nStr ptr = " << ptr << "\nStr ref = " << &ref << std::endl;
    std::cout << "String value:\nStr = " << str << "\nStr ptr = " << *ptr << "\nStr ref = " << ref << std::endl;
    return 0;
}