/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    HumanA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:29:20 by aromani           #+#    #+#             */
/*   Updated: 2025/11/18 12:52:38 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name ,Weapon &We) : w(We)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << &w << std::endl;
}

