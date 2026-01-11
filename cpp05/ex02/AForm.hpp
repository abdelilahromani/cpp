#ifndef FORM
# define FORM

#include <string>
class Bureaucrat;

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
        int get_grades() const;
        int get_gradex() const;
        bool  get_signed() const;
        virtual void execute(Bureaucrat const & executor) const = 0; 
        void beSigned(const Bureaucrat &b);
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
std::ostream &operator<< (std::ostream& of, const Form &form);

# endif