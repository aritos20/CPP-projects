/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:04:00 by agianico          #+#    #+#             */
/*   Updated: 2022/10/03 15:23:20 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete cat;
	delete dog;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong;
}