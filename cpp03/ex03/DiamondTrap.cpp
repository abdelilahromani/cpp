/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:34:28 by aromani           #+#    #+#             */
/*   Updated: 2025/12/16 17:52:47 by aromani          ###   ########.fr       */
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

void DiamondTrap::whoAmI()
{
    std::cout << "Dimoandtrap name: " << this->name << " ClapTrap name: " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

