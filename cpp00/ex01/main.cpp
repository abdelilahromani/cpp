/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:35:38 by aromani           #+#    #+#             */
/*   Updated: 2025/11/10 19:43:46 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int main()
{
    PhoneBook PhoneBook;
    std::string prom;
    std::string index_str;

    while (true)
    {
        std::cout << "prompt  ADD || SEARCH || EXIT  : " ;
        std::getline(std::cin, prom);
        if (std::cin.eof())
            return (0);
        if (prom == "ADD")
            PhoneBook.AddCon();
        if (prom == "SEARCH")
            PhoneBook.Search();
        if (prom == "EXIT")
            std::exit(0);
        
    }
    return 0;
}