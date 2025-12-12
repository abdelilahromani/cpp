/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:00:06 by aromani           #+#    #+#             */
/*   Updated: 2025/12/12 18:27:57 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Fixed Point::getx() const
{
    return (x );
}

Fixed Point::gety() const
{
    return (y );
}

Point::Point(const float x, const float y): x(x), y(y) {}

// Point &Point::operator=(const Fixed&fixed)
// {
//     this->x = point.x;
//     this->y = point.y;
//     return (*this);
// }
Point &Point::operator=(const Point &point)
{
    (void)point;
    return *this;
}


Point::Point(const Point &point) : x(point.x), y(point.y) {}


Point::~Point()
{
    
}