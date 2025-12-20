#ifndef ANIMAL
# define ANIMAL

#include <iostream>

class  Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        Animal(std::string type);
        virtual void makeSound() const = 0;
        std::string getType(void) const;
        // void set_type(std::string type);
};


# endif