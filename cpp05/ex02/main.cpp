/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 01:54:49 by aromani           #+#    #+#             */
/*   Updated: 2026/01/12 01:55:24 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Seed rand for RobotomyRequestForm
    std::srand(std::time(NULL));

    try {
        Bureaucrat alice("Alice", 1);   // high-grade bureaucrat
        Bureaucrat bob("Bob", 150);     // low-grade bureaucrat

        // Create forms
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Charlie");
        PresidentialPardonForm pardon("David");

        std::cout << "---- Signing Forms ----\n";

        alice.signForm(shrub);
        alice.signForm(robot);
        alice.signForm(pardon);

        // Bob tries to sign (should fail)
        bob.signForm(shrub);

        std::cout << "\n---- Executing Forms ----\n";

        // Execute forms
        alice.executeForm(shrub);   // writes file
        alice.executeForm(robot);   // 50% chance
        alice.executeForm(pardon);  // prints pardon

        // Bob tries to execute (should fail)
        bob.executeForm(shrub);

    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
