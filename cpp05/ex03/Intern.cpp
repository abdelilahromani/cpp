/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:33:43 by aromani           #+#    #+#             */
/*   Updated: 2026/01/14 23:34:03 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &intern)
{
    *this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
    (void)intern;
    return (*this);
}

AForm *Intern::makeForm(std::string requist, std::string target)
{
    AForm *requists[3] = {
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target)
    };
    std::string names[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    int saveindex = 4;
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == requist)
        {
            saveindex = i;
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (saveindex != i)
        {
            delete requists[i];
            requists[i] = NULL;
        }
    }
    if (saveindex == 4)
    {
        std::cout << "unseported requist" << std::endl;
        return (NULL);
    }
    std::cout << "Intern creates " << names[saveindex] << std::endl;
    return (requists[saveindex]);
}