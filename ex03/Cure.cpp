/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:40:37 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 17:01:57 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "Cure";
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << &target << "`s wounds *" << std::endl;
}
AMateria* Cure::clone() const
{
	return (new Cure());
}
