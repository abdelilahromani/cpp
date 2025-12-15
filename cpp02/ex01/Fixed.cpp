/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:31:59 by aromani           #+#    #+#             */
/*   Updated: 2025/12/14 15:06:54 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


const int Fixed::fractional = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed (const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = (value * 256);
}

Fixed::Fixed (const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * 256);
}

float Fixed::toFloat(void) const
{
    return (this->value / 256.0f);
}

int Fixed::toInt(void) const
{
    return (this->value / 256);
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;   
    if (this != &fixed)
        this->value = fixed.getRawBits();
    return (*this);
}



int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

std::ostream &operator<<(std::ostream& of, const Fixed &fixed)
{
    of << fixed.toFloat();
    return (of);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;  
}