/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:43:02 by aromani           #+#    #+#             */
/*   Updated: 2025/12/22 17:11:51 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::floor_index = 0;
AMateria *Character::floor[100] = {NULL};

Character::Character()
{
    this->name = "default";
    for (int i = 0; i < 4; i++)
    {
        this->inven[i] = NULL;
    }
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        this->inven[i] = NULL;
    }
}

void Character::clean_inventory(void) const
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inven[i];
        this->inven[i] = NULL;
    }
}

Character::Character(const Character &character): name(character.name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inven[i] = character.inven[i]->clone();
    }
}

Character &Character::operator=(const Character &character)
{
    if (this != &character)
    {
        this->name = character.name;
        clean_inventory();
        for (int i = 0; i < 4; i++)
        {
            this->inven[i] = character.inven[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    clean_inventory();
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!inven[i])
        {
            inven[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inven[idx])
        return ;
    if (floor_index < 100)
    {
        floor[floor_index++] = inven[idx];
        inven[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
     if (idx < 0 || idx >= 4 || !inven[idx] || !target)
        return ;
    inven[idx]->use(target);
}

static void Character::clean_floors(void) const
{
    for (int i = 0; i < floor_index; i++)
    {
        delete floor[i];
        floor[i] = NULL;
    }
    floor_index = 0;
}