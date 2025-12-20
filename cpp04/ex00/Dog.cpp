/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:36 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 13:52:02 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
   type = "Dog";
   std::cout << "Dog default constructor called" << std::endl; 
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog param constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog&dog)
{
    std::cout << "Dog copy asigment operator called" << std::cout;
    if (this != &dog)
        Animal::operator=(dog);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}