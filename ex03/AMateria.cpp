/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:52:25 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 13:07:19 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &other) : _type(other._type) {}

AMateria &AMateria::operator=(const AMateria &other) 
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AMateria::~AMateria() {}

void AMateria::use(ICharacter& target) 
{
	(void)target;
}

const std::string &AMateria::getType() const
{
	return (_type);
}


