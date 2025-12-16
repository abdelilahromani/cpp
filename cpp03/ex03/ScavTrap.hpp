#ifndef SCAV_TRP
# define SCAV_TRP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap :virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator=(const ScavTrap &scavtrap);
        ~ScavTrap();
        void guardGate();
        
        void attack(const std::string &target);

};

# endif