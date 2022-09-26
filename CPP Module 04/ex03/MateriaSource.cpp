#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _learnedAmount(0)
{
    for (int i = 0; i < MateriaSource::MateriaSize; i++)
        this->_materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) { *this = other; }

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MateriaSource::MateriaSize; i++)
    {
        if (this->_materials[i] != NULL)
            delete this->_materials[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    this->_learnedAmount = other._learnedAmount;

    for (int i = 0; i < MateriaSource::MateriaSize; i++)
    {
        if (this->_materials[i] != NULL)
            delete (this->_materials[i]);
        if (other._materials[i] != NULL)
            this->_materials[i] = other._materials[i]->clone();
        else
            this->_materials[i] = NULL;
    }

    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (this->_learnedAmount < MateriaSource::MateriaSize)
    {
        this->_materials[this->_learnedAmount] = materia;
        this->_learnedAmount;
    }
}

AMateria *MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < MateriaSource::MateriaSize; i++)
    {
        if (this->_materials[i]->getType() == type)
            return (this->_materials[i]->clone());
    }
    return (NULL);
}