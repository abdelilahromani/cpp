/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:49 by aromani           #+#    #+#             */
/*   Updated: 2025/11/10 13:32:14 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int    num_parser(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]) || str.length() > 10)
            return (std::cout << "unvalid phone number" << std::endl, -1);
        i++;
    }
    return (0);
}

int isprint_check(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isprint(str[i]) || !isalnum(str[i]))
            return (std::cout << "unvalid systaxe" << std::endl, -1);
        i++;
    }
    return (0);
}

PhoneBook::PhoneBook()
{
    c_index = 0;
    c_lengt = 0;
}

void PhoneBook::AddCon()
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phon_n;
    std::string dar_sec;

    while (true)
    {
        std::cout << "enter ur first name  : ";
        std::getline(std::cin, f_name);
        if (std::cin.eof())
            return ;
        if (f_name.empty())
            return ;
        if (isprint_check(f_name))
            return ;
        break;
    }
    while (true)
    {
        std::cout << "enter ur last name  : ";
        std::getline(std::cin, l_name);
        if (std::cin.eof())
            return ;
        if (l_name.empty())
            return ;
        if (isprint_check(l_name))
            return ;
        break;
    }
    while (true)
    {
        std::cout << "enter ur nick name  : ";
        std::getline(std::cin, n_name);
        if (std::cin.eof())
            return ;
        if (n_name.empty())
            return ;
        if (isprint_check(n_name))
            return ;
        break;
    }
    while (true)
    {
        std::cout << "enter ur phone number  : ";
        std::getline(std::cin, phon_n);
        if (std::cin.eof())
            return ;
        if (phon_n.empty())
            return ;
        if (num_parser(phon_n))
            return ;
        break;
    }
    while (true)
    {
        std::cout << "enter ur darkest secret  : ";
        std::getline(std::cin, dar_sec);
        if (std::cin.eof())
            return ;
        if (dar_sec.empty())
            return ;
        if (isprint_check(dar_sec))
            return ;
        break;
    }
    contacts[c_index].set_fname(f_name); 
    contacts[c_index].set_lname(l_name);
    contacts[c_index].set_nname(n_name);
    contacts[c_index].set_phnum(phon_n);
    contacts[c_index].set_dsec(dar_sec);

    c_index++;
    if (c_index == 7)
        c_index = 0;
    if (c_lengt < 8)
        c_lengt++;
}

void print_parser(std::string str)
{
    size_t i;
    
    if (str.length() > 10)
    {
        for (i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << '.';
    }
    else
    {
        for (i = 0; i < str.length(); i++)
            std::cout << str[i] ;
        // std::cout << "index is +++++ "<<i << std::endl;
        for ( i = 10 - str.length(); i != 0; i--)
            std::cout << " ";
        //std::cout << "" << std::endl;
    }
}

void PhoneBook::printer()
{
    int i;

    print_parser("index");
    std::cout << '|' ;
    print_parser("first name");
    std::cout << '|' ;
    print_parser(" last name");
    std::cout << '|' ;
    print_parser(" nickname");
    std::cout << '|' << std::endl ;
    for (i = 0; i < c_lengt; i++)
    {
        std::cout << i << "         " ; 
        std::cout << '|' ;
        print_parser(contacts[i].get_fname());
        std::cout << '|' ;
        print_parser(contacts[i].get_lname());
        std::cout << '|' ;
        print_parser(contacts[i].get_nname());
        std::cout << '|' << std::endl ;
    }
}

void PhoneBook::Search()
{
    int index;
    std::string str;

    printer();
    std::cout << "enter the index" << std::endl;
    std::getline(std::cin, str);
    if (std::cin.eof())
        return;
    if (str.empty())
    {
        std::cout << "unvalid index" << std::endl;
        return;
    }
    index = 10;
    if (str.length() == 1 && isdigit(str[0]))
        index = str[0] - 48;
    else
    {
        std::cout << "unvalid index" << std::endl;
        return;
    }
    if (index >= 8)
    {
        std::cout << "unvalid index" << std::endl;
        return;
    }
    std::cout << index << "         " ; 
    std::cout << '|' ;
    print_parser(contacts[index].get_fname());
    std::cout << '|' ;
    print_parser(contacts[index].get_lname());
    std::cout << '|' ;
    print_parser(contacts[index].get_nname());
    std::cout << '|' << std::endl ;
}
