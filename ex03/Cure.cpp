/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:40:37 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 15:40:45 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria(other) {}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}
Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);	
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure() {}