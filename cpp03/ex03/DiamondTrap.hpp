#ifndef DMND_TRP
# define DMND_TRP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator=(const DiamondTrap &diamondtrap);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};


#endif