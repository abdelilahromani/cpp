/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:29 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 13:45:21 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal param constructor called" << std::endl;
    this->type = type;
}
 
void WrongAnimal::makeSound() const
{
    std::cout << "type: " << type << ": speak " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal copy asigment operator called" << std::endl;
    if (this != &WrongAnimal)
    {
        this->type = WrongAnimal.type;
    }
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = WrongAnimal;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called" << std::endl;
}