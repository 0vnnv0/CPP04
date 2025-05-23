/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:59 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/08 14:43:07 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "| CAT | Default constructor called!" << std::endl;
}

Cat::Cat(std::string type) : Animal("Cat")
{
	_type = type;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "| CAT | Copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "| CAT | Copy Assignment operator called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "| CAT | Default destructor called!" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "The cat makes miauuuuu!!" << std::endl;
}