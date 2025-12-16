#ifndef FRAG_TRP
# define FRAG_TRP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap (const FragTrap &fragtrap);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &FragTrap);
        void highFivesGuys(void);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

# endif