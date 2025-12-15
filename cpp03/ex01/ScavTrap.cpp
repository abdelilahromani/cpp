/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:24:24 by aromani           #+#    #+#             */
/*   Updated: 2025/12/15 18:03:33 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Hit_Points = 0;
    this->Attack_damage = 0;
    this->Energy_points = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "param constructor called" << std::endl;
    this->Name = name;
    this->Hit_Points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    std::cout << "copy constructor called" << std::endl;
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;   
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
    std::cout << "ScavTrap is in gate kepper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destructor called" << std::endl;
}
