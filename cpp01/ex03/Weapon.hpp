#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
    std::string  type;
public:
    Weapon(std::string type);
    ~Weapon();
    std::string get_type()const;
    void set_type(std::string type);
};

# endif
