/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:13:09 by aromani           #+#    #+#             */
/*   Updated: 2025/11/18 17:13:17 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->w = NULL;
}

void HumanB::attack()
{
    if (w)
        std::cout << name << " attacks with their " << w->get_type() << std::endl;
    else 
        std::cout << "other type" << std::endl;
}

void HumanB::setweapen(Weapon &w)
{
    this->w = &w;
}