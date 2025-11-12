/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:24 by aromani           #+#    #+#             */
/*   Updated: 2025/11/12 17:28:13 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_fname()
{
    return (this->first_name);
}

std::string Contact::get_lname()
{
    return (this->last_name);
}
    
std::string Contact::get_nname()
{
    return (this->nick_name);
}

std::string Contact::get_phnum()
{
    return (this->phonenumber);
}

std::string Contact::get_dsec()
{
    return (this->darckest_secret);
}

void Contact::set_fname(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_lname(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nname(std::string nick_name)
{
    this->nick_name = nick_name;
}

void Contact::set_phnum(std::string phonenumber)
{
    this->phonenumber = phonenumber;
}

void Contact::set_dsec(std::string darckest_secret)
{
    this->darckest_secret = darckest_secret;
}