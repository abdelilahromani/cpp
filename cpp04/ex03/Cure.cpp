/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:04:15 by aromani           #+#    #+#             */
/*   Updated: 2025/12/22 16:19:35 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
    *this = cure;
}

Cure &Cure::operator=(const Cure &cure)
{
    if (this != &cure)
    {
        AMateria::operator=(cure);
    }
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure: * heals " << target << "’s wounds *" << std::endl;
}