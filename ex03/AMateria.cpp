/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:52:25 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 16:55:25 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other) 
{
	if (this != &other)
		*this = other;
	return (*this);
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

void AMateria::use(ICharacter& target) {}

const std::string &AMateria::getType() const
{
	return (_type);
}


