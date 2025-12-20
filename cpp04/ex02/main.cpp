/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:26:50 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 16:50:20 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // size_t i = 100;
    Cat d("nordine");
    Animal* a[100];
    for (int j = 0; j < 50; j++)
        a[j] = new Cat();
    for (int k = 50; k < 100; k++)
        a[k] = new Dog();
    d.set_brain("i need to eat", 5);
    d.makeSound();
    Dog c("nordine");
    // c.makeSound();
    // Animal z;
    // z.makeSound();
    // std::cout << "********************************" << d.makeSound() << std::endl;
    delete a[0];
}