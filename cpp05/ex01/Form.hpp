#ifndef FORM
# define FORM

#include "Bureaucrat.hpp"
#include <string>
// class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool    signe;
        const int gradetosign;
        const int gradetoexec;
    public:
        Form();
        Form(const std::string name, const int gradetosign, const int gradetoexec);
        ~Form();
        Form(const Form& form);
        Form &operator=(const Form& form);
        const std::string get_name() const;
        const int get_grades() const;
        const int get_gradex() const;
        bool  get_signed() const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

};

# endif