#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# include <string>

class MateriaSource: public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();

    MateriaSource& operator=(const MateriaSource& other);

    void learnMateria(AMateria *materia);
    AMateria* createMateria(const std::string& type);

private:
    static const int MateriaSize = 4;

    AMateria* _materials[MateriaSource::MateriaSize];
    int _learnedAmount;
};

#endif