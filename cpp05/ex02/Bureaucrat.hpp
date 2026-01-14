#ifndef BR
# define BR


#include <string>
#include <exception>
#include <iostream>

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat ();
        Bureaucrat (const std::string name, int grade);
        Bureaucrat (const Bureaucrat &bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat ();
        int getGrade() const;
        const std::string getName() const;
        void increment();
        void decrement();
        void signForm(AForm &form);
        void executeForm(AForm const &form) const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        }; 
};


std::ostream &operator<< (std::ostream& of, const Bureaucrat &bureaucrat);
# endif