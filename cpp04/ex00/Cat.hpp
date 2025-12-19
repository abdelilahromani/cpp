#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &cat);
        Cat (const Cat &cat);
        Cat (std::string type);

};


# endif