/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:18:12 by aromani           #+#    #+#             */
/*   Updated: 2026/01/14 21:54:20 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rfrom): AForm(rfrom)
{
    *this = rfrom;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rfrom)
{
    if (this != &rfrom)
        this->target = rfrom.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!get_signed() || executor.getGrade() > get_gradex())
        throw FormNotBesigned();
    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully"
                  << std::endl;
    else
        std::cout << "Robotomy failed on " << target << std::endl;
}