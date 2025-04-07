/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:59 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:58:43 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "| DOG | Default constructor called!" << std::endl;
}

Dog::Dog(std::string type)
{
	std::cout << type << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "| DOG | Copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "| DOG | Copy Assignment operator called!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "| DOG | Default destructor called!" << std::endl;
}