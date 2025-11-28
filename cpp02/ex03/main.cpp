/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:32:02 by aromani           #+#    #+#             */
/*   Updated: 2025/11/28 21:32:49 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point inside(5, 5);
    Point outside(20, 5);
    Point onEdge(5, 0);

    std::cout << "Inside test: "
              << (bsp(a, b, c, inside) ? "INSIDE" : "OUTSIDE")
              << std::endl;

    std::cout << "Outside test: "
              << (bsp(a, b, c, outside) ? "INSIDE" : "OUTSIDE")
              << std::endl;

    std::cout << "On edge test: "
              << (bsp(a, b, c, onEdge) ? "INSIDE" : "OUTSIDE")
              << std::endl;

    return 0;
}

