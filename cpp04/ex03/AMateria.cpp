/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 22:02:50 by aromani           #+#    #+#             */
/*   Updated: 2025/12/21 22:40:55 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "default";
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "AMateria param constructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    std::cout << "AMateria copy asigment operator called" << std::endl;
    if (this != &amateria)
        this->type = amateria.type;
    return (*this);
}

AMateria::AMateria(const AMateria &amateria)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = amateria;
}

AMateria::~AMateria()
{
    std::cout << "AMateria default destructor called" << std::endl;
}
