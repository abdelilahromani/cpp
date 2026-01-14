/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:28:26 by aromani           #+#    #+#             */
/*   Updated: 2026/01/14 21:53:57 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm",25, 5)
{
    this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm",25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pform) : AForm(pform)
{
    *this = pform;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pform)
{
    if (this != &pform)
        this->target = pform.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
    if (!get_signed() || execute.getGrade() > get_gradex())
        throw FormNotBesigned();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}