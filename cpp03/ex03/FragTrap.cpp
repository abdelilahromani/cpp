/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:41:07 by aromani           #+#    #+#             */
/*   Updated: 2025/12/16 18:24:44 by aromani          ###   ########.fr       */
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