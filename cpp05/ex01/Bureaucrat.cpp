/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 19:03:13 by aromani           #+#    #+#             */
/*   Updated: 2026/01/10 13:28:05 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    //this->name = "default";
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    //this->name = name;
    this->grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
    {
        //this->name = bureaucrat.name;
        this->grade = bureaucrat.grade;
    }
    return (*this);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::increment()
{
    if (grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement()
{
    if (grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.name)
{
    *this = bureaucrat;
}

std::ostream &operator<<(std::ostream &of, const Bureaucrat &bureaucrat)
{
    of << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (of);
}

void Bureaucrat::signForm(Form &from)
{
    try
    {
        from.beSigned(*this);
        std::cout << "signed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}