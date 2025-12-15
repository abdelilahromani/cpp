#ifndef CLAP_TRAP
# define CLAP_TRAP

# include <iostream>

class ClapTrap{
    protected:
        std::string  Name;
        unsigned int Hit_Points;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap &operator=(const ClapTrap &claptrap);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

# endif