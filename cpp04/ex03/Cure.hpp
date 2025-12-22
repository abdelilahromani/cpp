#ifndef CR
# define CR

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &cure);
        Cure &operator=(const Cure &cure);

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
}

# endif