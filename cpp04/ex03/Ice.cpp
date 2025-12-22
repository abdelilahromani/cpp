/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:55:09 by aromani           #+#    #+#             */
/*   Updated: 2025/12/22 20:46:28 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
    *this = ice;
}

Ice &Ice::operator=(const Ice &ice)
{
    if (this != &ice)
    {
        AMateria::operator=(ice);
    }
    return (*this);
}

void Ice::use(ICharacter &target)
{
    //Ice: "* shoots an ice bolt at <name> *"
    std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}