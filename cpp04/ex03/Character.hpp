#ifndef CHT
# define CHT

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string      name;
        AMateria *       inven[4];
        static AMateria* floor[100];
        static int       floor_index;
        void clean_inventory(void) const;
    public:
        Character();
        Character(std::string name);
        Character(const Character &character);
        Character &operator=(const Character &character);
        ~Character();
        std::string const & getName() const = 0;
        void equip(AMateria* m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, ICharacter& target) = 0;
        static void clean_floors(void) const;
}

# endif