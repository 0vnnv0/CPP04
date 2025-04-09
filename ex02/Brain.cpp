/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:44:43 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/09 15:13:08 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout <<  YELLOW << "       Brain has been created!" << RESET << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

Brain::~Brain() 
{
	std::cout << YELLOW << "       Brain has been destructed!" << RESET << std::endl;
}