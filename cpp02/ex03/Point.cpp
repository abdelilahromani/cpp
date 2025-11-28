/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:00:06 by aromani           #+#    #+#             */
/*   Updated: 2025/11/28 19:34:59 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}

const Point Point::gatx()
{
    return (x);
}

const Point Point::gety()
{
    return (y);
}

Point::Point(const float x, const float y)
{
    this->x = x;
    this->y = y;
}

Point::operator=(const Point&point)
{
    if (*this != point)
    {
        this->x = point.x;
        this->y = point.y;
    }
    return (*this);
}

Point::Point(const Point&point)
{
    *this = point;
}

Point::~Point()
{
    
}