/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 01:54:49 by aromani           #+#    #+#             */
/*   Updated: 2026/01/14 23:40:12 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() 
{
    Intern someRandomIntern;
    Bureaucrat b("abdo", 25);
    AForm* rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    try
    {
        rrf->beSigned(b);
        rrf->execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << rrf->get_name() << std::endl;
    delete rrf;
}