#ifndef FRAG_TRP
# define FRAG_TRP

# include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap (const FragTrap &fragtrap);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &FragTrap);
        void highFivesGuys(void);
};

# endif