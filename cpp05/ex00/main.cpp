/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 19:44:46 by aromani           #+#    #+#             */
/*   Updated: 2025/12/31 02:05:50 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Alice", 0);
        std::cout << a << std::endl;

        a.increment();
        std::cout << "After increment: " << a << std::endl;

        a.decrement();
        std::cout << "After decrement: " << a << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}