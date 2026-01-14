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

        Form *makeForm(std::string s1, std::string s2);
//         Form *CreatePrPardom(std::string target);
//         Form *CreateRbRequist(std::string target);
//         Form *CreateShuCreation(std::string target);
};

# endif