/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 21:56:57 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 15:00:17 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "default";
    }
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::get_idea(int i) const
{
    std::string idea;
    for (int j = 0; j < 100; j++)
    {
        if (j == i)
            idea = ideas[i];
    }
    return (idea);
}

void Brain::set_idea(std::string idea, int i)
{
    for (int j = 0; j < 100 ; j++)
    {
        if (j == i)
            ideas[i] = idea;
    }
}

Brain::Brain(const Brain &brain) 
{
    std::cout << "Brain copy constructor called" << std::endl;
    // for (int i = 0; i < 100; i++)
    // {
    //     ideas[i] = brain.ideas[i];
    // }
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain copy asigment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = brain.ideas[i];
    }
    return (*this);
}

