#ifndef BRAIN
# define BRAIN

# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        //Brain (std::string *ideas);
        Brain (const Brain &brain);
        Brain &operator= (const Brain &brain);
        void set_idea(std::string idea, int i);
        std::string get_idea(int i) const;
};

# endif