/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:04:43 by aromani           #+#    #+#             */
/*   Updated: 2026/01/12 01:59:03 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("default"), signe(false),gradetosign(150),gradetoexec(150){}

Form::Form(const std::string name, const int gs, const int gx): name(name), gradetosign(gs), gradetoexec(gx){}

Form::Form(const Form& form): name(form.name), signe(form.signe), gradetosign(form.gradetosign), gradetoexec(form.gradetoexec){}

Form::~Form(){}

Form &Form::operator=(const Form &form)
{
    if (this != &form)
        this->signe = form.signe;
    return (*this);
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > this->gradetosign)
        GradeTooLowException();
    signe = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* Form::FormNotBesigned::what() const throw()
{
    return ("form not signed");
}

const std::string Form::get_name() const
{
    return (this->name);
}

int Form::get_grades() const
{
    return (this->gradetosign);
}

int Form::get_gradex() const
{
    return (this->gradetoexec);
}

bool Form::get_signed() const
{ 
    return (this->signe);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "form" << form.get_name() << ", signed" << form.get_signed() << ", gradetosign" << form.get_grades() << ", gradetoexec" << form.get_gradex() << std::endl;
    return (os);
}

// void Form::execute(Bureaucrat const &execute) const
// {
//     if (!signe)
//         throw FormNotBesigned();
//     if (execute.getGrade() > gradetoexec)
//         throw FormNotBesigned();
// }