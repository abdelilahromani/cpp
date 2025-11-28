/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bdp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:59:50 by aromani           #+#    #+#             */
/*   Updated: 2025/11/28 19:34:34 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_val(Point const a, Point const b, Point const c)
{
    Fixed area = (a.getx() * (b.gety() - c.gety()) +
                   b.getx() * (c.gety() - a.gety()) +
                   c.getx() * (a.gety() - b.gety()));
    return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc = get_val(a, b, c);

    Fixed apb = get_val(a, point, b);
    Fixed apc = get_val(a, point, c);
    Fixed bpc = get_val(b, point, c);

    if (apb == 0 || apc == 0 || bpc == 0)
        return (false);
    return (abc = apb + apc + bpc);
}