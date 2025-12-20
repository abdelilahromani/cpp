#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *br;
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &cat);
        Cat (const Cat &cat);
        Cat (std::string type);
        std::string get_brain(int i) const;
        void set_brain(std::string brain, int i);
};


# endif