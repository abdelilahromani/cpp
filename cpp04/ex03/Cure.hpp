#ifndef CR
# define CR

#include "AMateria.hpp"
#include "ICharacter.hpp"
class ICharacter;

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &cure);
        Cure &operator=(const Cure &cure);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

# endif