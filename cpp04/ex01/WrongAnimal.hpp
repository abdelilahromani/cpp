#ifndef WRANIML
# define WRANIML

#include <iostream>

class  WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &WrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
        WrongAnimal(std::string type);
        void makeSound() const;
        std::string getType(void) const;
        // void set_type(std::string type);
};

# endif