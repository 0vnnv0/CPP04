/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:38:40 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 13:12:31 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &other) : AMateria(other) {}

void Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

Ice::~Ice() {}