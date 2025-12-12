/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:59:50 by aromani           #+#    #+#             */
/*   Updated: 2025/12/12 19:00:14 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float get_abs(float area)
{
    float area_abs = area;
    if (area_abs < 0)
        area_abs = area_abs * -1;
    return (area_abs);
}

float get_val(Point const a, Point const b, Point const c)
{
    float area = (a.getx().toFloat() * (b.gety().toFloat() - c.gety().toFloat()) +
    b.getx().toFloat() * (c.gety().toFloat() - a.gety().toFloat()) +
    c.getx().toFloat() * (a.gety().toFloat() - b.gety().toFloat()));

    return (get_abs(area));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{ 
    float abc = get_val(a, b, c);
    float apb = get_val(point, a, b);
    float apc = get_val(point, a, c);
    float bpc = get_val(point, b, c);
    
    if (apb == 0 || apc == 0 || bpc == 0)
        return (false);    
    return (abc == apb + apc + bpc);
}