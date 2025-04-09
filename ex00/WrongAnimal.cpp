/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:51:27 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/08 16:40:46 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "| WRONG ANIMAL | Default Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << "| WRONG ANIMAL | " << _type << " created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "| WRONG ANIMAL | Copy constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "| WRONG ANIMAL | Copy assignment operator called!" << std::endl;	
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "| WRONG ANIMAL | Destructor called!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "-> The wrong animal is making sounds!" << std::endl;
}
