/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:26:50 by aromani           #+#    #+#             */
/*   Updated: 2025/12/19 18:51:13 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType()  << std::endl;
    std::cout << i->getType()  << std::endl;
    std::cout << meta->getType() << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    return 0;
}