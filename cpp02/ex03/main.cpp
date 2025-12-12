/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:32:02 by aromani           #+#    #+#             */
/*   Updated: 2025/12/12 19:05:42 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(0, 10);
    Point c(4, 0);

    Point inside(1, 1);
    Point outside(2, 4);
    Point onEdge(0, 0);

    std::cout << bsp(a, b, c, inside) << std::endl;

    std::cout << bsp(a, b, c, outside) << std::endl;

    std::cout << bsp(a, b, c, onEdge) << std::endl;

    return 0;
}

