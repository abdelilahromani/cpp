/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:33 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 15:04:37 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
    br = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat (const Cat &cat) : Animal(cat)
{
    std::cout << "cat copy constructor called" << std::endl;
    // delete br;
    // br = new Brain();
    br = NULL;
    *this = cat;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "cat param constructor called" << std::endl;
    br = new Brain();
}

// Cat::Cat (std::string type): Animal(type)
// {
//     std::cout << "cat param constructor called" << std::endl;
// }

void Cat::set_brain(std::string idea, int i)
{
    br->set_idea(idea, i);
}

std::string Cat::get_brain(int i) const
{
    std::string idea;
    // for (int j = 0; j < 100; j++)
    // {
    //     if (i == j)
    idea = br->get_idea(i);
    // }
    return (idea);
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat copy asigment operator called" << std::endl;
    //Animal::operator=(cat);
    if (this != &cat)
    {
        Animal::operator=(cat);
        delete br;
        br = new Brain(*cat.br);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete br;
}

