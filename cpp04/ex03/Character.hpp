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
        void clean_inventory(void);
    public:
        Character();
        Character(std::string name);
        Character(const Character &character);
        Character &operator=(const Character &character);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        static void clean_floors();
};

# endif