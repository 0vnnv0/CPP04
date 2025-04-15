/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:57:03 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/15 15:44:14 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{}

void MateriaSource::learnMateria(AMateria*)
{
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}