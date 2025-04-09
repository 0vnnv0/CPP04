/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:38:40 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 17:01:41 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{
	_type = "ice";
}

void Ice::use(ICharacter& target)
{
	std::cout << " * heals " << &target << "`s wounds *" << std::endl; 
}

AMateria* Ice::clone() const
{
	return (new Ice());
}
