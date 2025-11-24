#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
    std::string  type;
public:
    Weapon(std::string type);
    const std::string &get_type();
    void set_type(std::string type);
};

# endif


