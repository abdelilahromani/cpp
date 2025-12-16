/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:24:24 by aromani           #+#    #+#             */
/*   Updated: 2025/12/16 17:26:46 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->Hit_Points = 0;
    this->Attack_damage = 0;
    this->Energy_points = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap param constructor called" << std::endl;
    this->Name = name;
    this->Hit_Points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;   
    if (this != &scavTrap)
    {
        this->Name = scavTrap.Name;
        this->Hit_Points = scavTrap.Hit_Points;
        this->Attack_damage = scavTrap.Attack_damage;
        this->Energy_points = scavTrap.Energy_points;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    if (Hit_Points > 0)
        std::cout << "ScavTrap is in gate kepper mode" << std::endl;
    else
        std::cout << "Scavtrap is dead cant't do anything" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->Name << " is dead" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points <= amount)
    {
        Hit_Points = 0;
        std::cout << "ScavTrap " << this->Name << " is dead, can't take damage" << std::endl;
    }
    else
    {
        Hit_Points -= amount;
        std::cout << "ScavTrap " << this->Name << " takes damage: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Hit_Points += amount;
        Energy_points--;
        std::cout << "ScavTrap " << this->Name << " beRepaired: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->Name << " is dead ,can't be repaired" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
