/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bdp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:59:50 by aromani           #+#    #+#             */
/*   Updated: 2025/11/28 23:23:11 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_abs(Fixed area)
{
    Fixed area_abs = area;
    if (area_abs < 0)
        area_abs = area_abs * Fixed(-1);
    return (area_abs);
}

Fixed get_val(Point const a, Point const b, Point const c)
{
    Fixed area = (a.getx() * (b.gety() - c.gety()) +
                  b.getx() * (c.gety() - a.gety()) +
                  c.getx() * (a.gety() - b.gety()));
    return (get_abs(area));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc = get_val(a, b, c);
    Fixed apb = get_val(point, a, b);
    Fixed apc = get_val(point, a, c);
    Fixed bpc = get_val(point, b, c);

    if (apb == 0 || apc == 0 || bpc == 0)
        return (false);
    std::cout << abc << std::endl;
    std::cout << apb << std::endl;
    std::cout << apc << std::endl;
    std::cout << bpc << std::endl;

    std::cout << apb + apc + bpc << std::endl;

    return (abc == apb + apc + bpc);
}