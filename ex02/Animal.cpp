/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:34:09 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/08 17:11:52 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << "| ANIMAL | Default Constructor called!" << std::endl;
	_type = "default";
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "| ANIMAL | " << _type << " created!" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "| ANIMAL | Copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "| ANIMAL | Copy assignment operator called!" << std::endl;	
	return (*this);
}

Animal::~Animal() 
{
	std::cout << "| ANIMAL | Destructor called!" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "-> Most animals make sounds!" << std::endl;
}
