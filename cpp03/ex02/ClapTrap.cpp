/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:44:53 by aromani           #+#    #+#             */
/*   Updated: 2025/12/15 20:58:11 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Hit_Points = 0;
    this->Energy_points = 0;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "param constructor called" << std::endl;
    this->Name = name;
    this->Hit_Points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap&clapTrap)
{
    std::cout << "copy constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;   
    if (this != &clapTrap)
    {
        this->Name = clapTrap.Name;
        this->Attack_damage = clapTrap.Attack_damage;
        this->Energy_points = clapTrap.Energy_points;
        this->Hit_Points = clapTrap.Energy_points;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points <= amount)
    {
        Hit_Points = 0;
        std::cout << "ClapTrap " << this->Name << " is dead, can't take damage" << std::endl;
    }
    else
    {
        Hit_Points -= amount;
        std::cout << "ClapTrap " << this->Name << " takes damage: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Hit_Points += amount;
        Energy_points--;
        std::cout << "ClapTrap " << this->Name << " beRepaired: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is dead ,can't be repaired" << std::endl;
}
