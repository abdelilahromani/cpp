/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:36 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 14:16:26 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
   type = "Dog";
   br = new Brain();
   std::cout << "Dog default constructor called" << std::endl; 
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog param constructor called" << std::endl;
    br = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    br = NULL;
    *this = dog;
}

Dog &Dog::operator=(const Dog&dog)
{
    std::cout << "Dog copy asigment operator called" << std::cout;
    if (this != &dog)
    {
        Animal::operator=(dog);
        delete br;
        br = new Brain(*dog.br);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete br;
}