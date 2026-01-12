/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 01:32:58 by aromani           #+#    #+#             */
/*   Updated: 2026/01/12 02:07:52 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sform): Form(sform)
{
    *this = sform;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&sform)
{
    if (this != &sform)
        this->target = sform.target;
    return (*this); 
}

const char* ShrubberyCreationForm::ErrorOpeningFile::what() const throw()
{
    return ("error opening file");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!get_signed() || executor.getGrade() > get_gradex())
        throw FormNotBesigned();
    std::ofstream file(target + "_shrubbery");
    if (!file.is_open())
        throw ErrorOpeningFile();
    file << "   /\\  " << '\n';
    file << "  /  \\  " << '\n';
    file << " /    \\  " << '\n';
    file << "/______\\  " << '\n';
    file << "   ||  " << '\n';
    file << "   ||  " << '\n';
    file.close();
}