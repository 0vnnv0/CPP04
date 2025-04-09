/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:59 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 14:39:10 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "| CAT | Default constructor called!" << std::endl;
	_Brain = new Brain();
}

Cat::Cat(std::string type) : Animal("Cat")
{
	_type = type;
	_Brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	_Brain = new Brain(*other._Brain);
	std::cout << "| CAT | Copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete _Brain;
		_Brain = new Brain(*other._Brain);
	}
	std::cout << "| CAT | Copy Assignment operator called!" << std::endl;
	return (*this);
}

Brain* Cat::getBrain() const
{
	return (_Brain);
}

Cat::~Cat()
{
	std::cout << "| CAT | Default destructor called!" << std::endl;
	delete _Brain;
}

void Cat::makeSound() const 
{
	std::cout << "The cat makes miauuuuu!!" << std::endl;
}