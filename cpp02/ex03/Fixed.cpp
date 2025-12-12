/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:31:59 by aromani           #+#    #+#             */
/*   Updated: 2025/12/12 16:23:33 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed (const int value)
{
    this->value = (value * 256);
}

Fixed::Fixed (const float value)
{
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
    //std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    //std::cout << "Copy assignment operator called" << std::endl;   
    if (this != &fixed) //leaen more about self asignement
        this->value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator!=(const Fixed&fixed) const
{
    return (this->value != fixed.value);
}

bool Fixed::operator<=(const Fixed&fixed) const
{
    return (this->value <= fixed.value);
}

bool Fixed::operator<(const Fixed&fixed) const
{
    return (this->value < fixed.value);
}

bool Fixed::operator==(const Fixed&fixed) const
{
    return (this->value == fixed.value);
}

bool Fixed::operator>=(const Fixed&fixed) const
{
    return (this->value >= fixed.value);
}

bool Fixed::operator>(const Fixed&fixed) const
{
    return (this->value > fixed.value);
}

Fixed Fixed::operator*(const Fixed&fixed) const
{
    Fixed tmp;
    tmp = ((this->value / 256.0f) * (fixed.value / 256.0f));
    return (tmp);
}

Fixed Fixed::operator+(const Fixed&fixed) const
{
    Fixed tmp;
    tmp = this->value + fixed.value;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed tmp;
    tmp = this->value - fixed.value;
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed tmp;
    tmp = ((this->value * 256.0f) / (fixed.value * 256.0f));
    return (tmp);
}

Fixed &Fixed::operator++()
{
    this->value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->value += 1;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->value -= 1;
    return (tmp);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed Fixed::min(const Fixed &a,const Fixed &b) 
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed Fixed::max(const Fixed &a,const Fixed &b) 
{
    if (a > b)
        return (a);
    return (b);
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;  
}