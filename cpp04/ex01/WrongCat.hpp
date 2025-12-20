#ifndef WRCAT
# define WRCAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat &operator=(const WrongCat &WrongCat);
        WrongCat (const WrongCat &WrongCat);
        WrongCat (std::string type);

};


# endif