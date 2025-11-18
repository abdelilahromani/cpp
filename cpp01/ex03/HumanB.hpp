#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *w;
public:
    HumanB(std::string name);
    void attack();
    void setweapen(Weapon &we);
};


# endif