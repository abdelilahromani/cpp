/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:41:49 by aromani           #+#    #+#             */
/*   Updated: 2025/11/17 21:52:30 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *ptr = &var;
    std::string &refptr = var;

    std::cout << "Memory address of string variable: " << &var << std::endl;
    std::cout << "Memory address held by stringPTR: " << ptr << std::endl;
    std::cout << "Memory address held by stringREF: " << &refptr << std::endl;

    std::cout << "The value of the string variable: " << var << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *ptr << std::endl;
    std::cout << "The value pointed to by stringREF: " << refptr << std::endl;

}