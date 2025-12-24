/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:31:11 by aromani           #+#    #+#             */
/*   Updated: 2025/12/24 01:36:57 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        source[i] = NULL;
    }
}

void MateriaSource::clear_source()
{
    for (int i =0; i < 4; i++)
    {
        if (source[i])
        {
            delete source[i];
            source[i] = NULL;
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource& materiasource)
{
    for (int i = 0; i < 4; i++)
    {
        if (materiasource.source[i] != NULL)
            source[i] = materiasource.source[i]->clone();
    }
}

void MateriaSource::learnMateria(AMateria *amateria)
{
    if (!amateria)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!source[i])
        {
            source[i] = amateria;
            return ;
        }
    }
    delete amateria;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (source[i] && source[i]->getType() == type)
        {
            return (source[i]->clone());
        }
    }
    return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource& materiasource)
{
    for (int i = 0; i < 4; i++)
    {
        if (materiasource.source[i] != NULL)
            source[i] = materiasource.source[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    clear_source();
}