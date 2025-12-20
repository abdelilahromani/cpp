/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:20:33 by aromani           #+#    #+#             */
/*   Updated: 2025/12/20 13:46:53 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat (const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = WrongCat;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat param constructor called" << std::endl;
}

// WrongCat::WrongCat (std::string type): WrongAnimal(type)
// {
//     std::cout << "WrongCat param constructor called" << std::endl;
// }

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat copy asigment operator called" << std::endl;
    //WrongAnimal::operator=(WrongCat);
    (void)WrongCat;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

