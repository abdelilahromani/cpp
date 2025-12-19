/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:33 by aromani           #+#    #+#             */
/*   Updated: 2025/12/19 18:47:11 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat (const Cat &cat) : Animal(cat)
{
    std::cout << "cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "cat param constructor called" << std::endl;
}

// Cat::Cat (std::string type): Animal(type)
// {
//     std::cout << "cat param constructor called" << std::endl;
// }

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat copy asigment operator called" << std::endl;
    //Animal::operator=(cat);
    (void)cat;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

