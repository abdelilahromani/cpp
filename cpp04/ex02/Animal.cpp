/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:29 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 16:37:37 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <typeinfo>

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "animal param constructor called" << std::endl;
    this->type = type;
}
 
// void Animal::makeSound() const
// {
//     std::cout << "type: " << type << ": speak " << std::endl;
// }

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal copy asigment operator called" << std::endl;
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return (*this);
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}