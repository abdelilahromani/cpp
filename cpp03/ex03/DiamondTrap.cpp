/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:34:28 by aromani           #+#    #+#             */
/*   Updated: 2025/12/16 17:26:26 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap() , FragTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap param constructor called" << std::endl;
    this->name = name;
    this->Hit_Points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    std::cout << "DiamondTrap copy asigment operator called" << std::endl;
    if (this != &diamondtrap)
    {
        this->name = diamondtrap.name;
        this->Hit_Points = diamondtrap.Hit_Points;
        this->Energy_points = diamondtrap.Energy_points;
        this->Attack_damage = diamondtrap.Attack_damage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points <= amount)
    {
        Hit_Points = 0;
        std::cout << "DiamondTrap " << this->Name << " is dead, can't take damage" << std::endl;
    }
    else
    {
        Hit_Points -= amount;
        std::cout << "DiamondTrap " << this->Name << " takes damage: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Hit_Points += amount;
        Energy_points--;
        std::cout << "DiamondTrap " << this->Name << " beRepaired: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
    else
        std::cout << "DiamondTrap " << this->Name << " is dead ,can't be repaired" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Dimoandtrap name: " << this->name << " ClapTrap name: " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

