/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:28:40 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 15:11:55 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	// Cat a;
	// Cat b;

	// a = b;

	// std::cout << "a's brain: " << a.getBrain() << std::endl;
	// std::cout << "b's brain: " << b.getBrain() << std::endl;
	
	Animal *animals[10];
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	for (int l = 0; l < 10; l++)
	{
		delete animals[l];
	}
	return (0);
}