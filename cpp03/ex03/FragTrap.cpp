/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:41:07 by aromani           #+#    #+#             */
/*   Updated: 2025/12/16 17:26:38 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->Attack_damage = 0;
    this->Energy_points = 0;
    this->Hit_Points = 0;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap param constructor called" << std::endl;
    this->Name = name;
    this->Hit_Points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &fragtrap)
    {
        this->Name = fragtrap.Name;
        this->Hit_Points = fragtrap.Hit_Points;
        this->Energy_points = fragtrap.Energy_points;
        this->Attack_damage = fragtrap.Attack_damage;
    }
    return (*this);
}

void FragTrap::attack(const std::string &target)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << this->Name << " is dead" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points <= amount)
    {
        Hit_Points = 0;
        std::cout << "FragTrap " << this->Name << " is dead, can't take damage" << std::endl;
    }
    else
    {
        Hit_Points -= amount;
        std::cout << "FragTrap " << this->Name << " takes damage: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points > 0 && Energy_points > 0)
    {
        Hit_Points += amount;
        Energy_points--;
        std::cout << "FragTrap " << this->Name << " beRepaired: " << amount << " Hit points left: " << Hit_Points << std::endl;
    }
    else
        std::cout << "FragTrap " << this->Name << " is dead ,can't be repaired" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (Hit_Points > 0)
        std::cout << "hight five guys" << std::endl;
    else
        std::cout << "FragTrap is dead can't do anything" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}