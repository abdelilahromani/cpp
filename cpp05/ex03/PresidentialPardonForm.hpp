#ifndef PR
# define PR

# include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form 
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &pform);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &pform);

        void execute(Bureaucrat const & executor) const;
};

# endif