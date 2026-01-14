#ifndef IT
# define IT

#include <string>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern& intern);
        Intern &operator=(const Intern& intern);

        AForm *makeForm(std::string s1, std::string s2);
//         AForm *CreatePrPardom(std::string target);
//         AForm *CreateRbRequist(std::string target);
//         AForm *CreateShuCreation(std::string target);
};

# endif