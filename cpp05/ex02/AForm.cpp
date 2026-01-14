/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:04:43 by aromani           #+#    #+#             */
/*   Updated: 2026/01/14 21:53:39 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name("default"), signe(false),gradetosign(150),gradetoexec(150){}

AForm::AForm(const std::string name, const int gs, const int gx): name(name), gradetosign(gs), gradetoexec(gx){}

AForm::AForm(const AForm& form): name(form.name), signe(form.signe), gradetosign(form.gradetosign), gradetoexec(form.gradetoexec){}

AForm::~AForm(){}

AForm &AForm::operator=(const AForm &form)
{
    if (this != &form)
        this->signe = form.signe;
    return (*this);
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > this->gradetosign)
        GradeTooLowException();
    signe = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* AForm::FormNotBesigned::what() const throw()
{
    return ("form not signed");
}

const std::string AForm::get_name() const
{
    return (this->name);
}

int AForm::get_grades() const
{
    return (this->gradetosign);
}

int AForm::get_gradex() const
{
    return (this->gradetoexec);
}

bool AForm::get_signed() const
{ 
    return (this->signe);
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "form" << form.get_name() << ", signed" << form.get_signed() << ", gradetosign" << form.get_grades() << ", gradetoexec" << form.get_gradex() << std::endl;
    return (os);
}

// void AForm::execute(Bureaucrat const &execute) const
// {
//     if (!signe)
//         throw FormNotBesigned();
//     if (execute.getGrade() > gradetoexec)
//         throw FormNotBesigned();
// }