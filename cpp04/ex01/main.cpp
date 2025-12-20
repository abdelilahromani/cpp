/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:26:50 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 15:04:12 by aromani          ###   ########.fr       */
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
    std::cout << "********************************" << d.get_brain(5)<< std::endl;
    delete a[0];
}