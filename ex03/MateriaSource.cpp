/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:57:03 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/16 17:09:50 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_templates[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
		else
			_templates[i] = 0;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_templates[i])
			{
				delete _templates[i];
				_templates[i] = 0;
			}
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
		}
	}
	return (*this);
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_templates[i])
			delete _templates[i];
}
void MateriaSource::learnMateria(AMateria* m) {
    if (!m) {
        std::cout << "Tried to learn a NULL Materia!\n";
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (!_templates[i]) {
            _templates[i] = m;
            return;
        }
    }
    std::cout << "All slots full. Cannot learn " << m->getType() << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());	
	}
	std::cout << "Unknown Materia type: " << type << std::endl;
	return (0);
}