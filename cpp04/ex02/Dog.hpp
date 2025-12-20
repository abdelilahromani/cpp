#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *br;
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        Dog(const Dog&dog);
        Dog &operator=(const Dog&dog);
        void makeSound() const;
};




# endif
