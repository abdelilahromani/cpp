#ifndef SF
# define SF

# include "AForm.hpp"
#include "Bureaucrat.hpp"

class   ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& sform);
        ShrubberyCreationForm(std::string targer);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &sform);

        class ErrorOpeningFile : public std::exception 
        {
            public:
                const char *what() const throw();
        };

        void execute(Bureaucrat const & executor) const;
};

# endif