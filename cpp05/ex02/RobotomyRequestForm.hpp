#ifndef RB
# define RB

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& rform);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& rform);

        void execute(Bureaucrat const & executor) const;
};

# endif