/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:31:59 by aromani           #+#    #+#             */
/*   Updated: 2025/11/27 13:50:50 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->fp_value = 0;
}

Fixed::Fixed (const int value)
{
    this->fp_value = (value * 256);
}

Fixed::Fixed (const float value)
{
    this->fp_value = roundf(value * 256);
}

float Fixed::toFloat(void) const
{
    return (this->fp_value / 256.0f);
}

int Fixed::toInt(void) const
{
    return (this->fp_value / 256);
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
        this->fp_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_value);
}

void Fixed::setRawBits(int const raw)
{
    this->fp_value = raw;
}

std::ostream &operator<<(std::ostream& of, const Fixed &fixed)
{
    of << fixed.toFloat();
    return (of);
}

bool Fixed::operator!=(const Fixed&fixed) const
{
    return (this->fp_value != fixed.fp_value);
}

bool Fixed::operator<=(const Fixed&fixed) const
{
    return (this->fp_value <= fixed.fp_value);
}

bool Fixed::operator<(const Fixed&fixed) const
{
    return (this->fp_value < fixed.fp_value);
}

bool Fixed::operator==(const Fixed&fixed) const
{
    return (this->fp_value == fixed.fp_value);
}

bool Fixed::operator>=(const Fixed&fixed) const
{
    return (this->fp_value >= fixed.fp_value);
}

bool Fixed::operator>(const Fixed&fixed) const
{
    return (this->fp_value > fixed.fp_value);
}

Fixed Fixed::operator*(const Fixed&fixed) const
{
    Fixed tmp;
    tmp = ((this->fp_value / 256.0f) * (fixed.fp_value / 256.0f));
    return (tmp);
}

Fixed Fixed::operator+(const Fixed&fixed) const
{
    Fixed tmp;
    tmp = this->fp_value + fixed.fp_value;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed tmp;
    tmp = this->fp_value - fixed.fp_value;
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed tmp;
    tmp = ((this->fp_value * 256.0f) / (fixed.fp_value * 256.0f));
    return (tmp);
}

Fixed &Fixed::operator++()
{
    this->fp_value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->fp_value += 1;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->fp_value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->fp_value -= 1;
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