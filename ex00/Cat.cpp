/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:59 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:59:13 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "| CAT | Default constructor called!" << std::endl;
}

Cat::Cat(std::string type)
{
	std::cout << type << std::endl;
}

Cat::Cat(const Cat &other)
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