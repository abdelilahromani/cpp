#ifndef MTSR
# define MTSR

# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource: public IMateriaSource
{
    private:
        AMateria*source[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& materiasource);
        MateriaSource &operator=(const MateriaSource& materiasource);

        void learnMateria(AMateria* amateria);
        AMateria *createMateria(std::string const &type);
        void clear_source();
};

# endif