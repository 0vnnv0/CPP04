/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:59 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 14:42:27 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "| DOG | Default constructor called!" << std::endl;
	_Brain = new Brain();
}

Dog::Dog(std::string type) : Animal("Dog")
{
	_type = type;
	_Brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	_Brain = new Brain(*other._Brain);
	std::cout << "| DOG | Copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete _Brain;
		_Brain = new Brain(*other._Brain);
	}
	std::cout << "| DOG | Copy Assignment operator called!" << std::endl;
	return (*this);
}
Brain* Dog::getBrain() const
{
	return (_Brain);
}

Dog::~Dog()
{
	std::cout << "| DOG | Default destructor called!" << std::endl;
	delete _Brain;
}

void Dog::makeSound() const
{
	std::cout << "Dogs bark!!" << std::endl;
}