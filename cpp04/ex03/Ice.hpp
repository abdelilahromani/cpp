#ifndef ICE
# define ICE

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice &ice);
        ~Ice();
        Ice &operator=(const Ice &ice);

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
}

#endif