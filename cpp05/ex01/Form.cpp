/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:04:43 by aromani           #+#    #+#             */
/*   Updated: 2026/01/09 23:49:41 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

const std::string Form::get_name() const
{
    return (this->name);
}

const int Form::get_grades() const
{
    return (this->gradetosign);
}

const int Form::get_gradex() const
{
    return (this->gradetoexec);
}

bool Form::get_signed() const
{ 
    return (this->signe);
}