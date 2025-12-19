#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        Dog(const Dog&dog);
        Dog &operator=(const Dog&dog);
};




# endif
