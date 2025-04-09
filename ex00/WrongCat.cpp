/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:17 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/08 16:41:15 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "| WRONG CAT | Default constructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal("Cat")
{
	_type = type;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "| WRONG CAT | Copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "| WRONG CAT | Copy Assignment operator called!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "| WRONG CAT | Default destructor called!" << std::endl;
}

void WrongCat::makeSound() const 
{
	std::cout << "The wrong 🐈 makes miauuuuu!!" << std::endl;
}