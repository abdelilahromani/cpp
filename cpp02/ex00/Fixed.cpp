/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:31:59 by aromani           #+#    #+#             */
/*   Updated: 2025/11/24 17:27:20 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 0;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fp_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;   
    if (this != &fixed) //leaen more about self asignement
        this->fp_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_value);
}

void Fixed::setRawBits(int const raw)
{
    this->fp_value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;  
}




