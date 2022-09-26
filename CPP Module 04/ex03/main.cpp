#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* character = new Character("Tim");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    character->equip(tmp);
    tmp = src->createMateria("cure");
    character->equip(tmp);

    ICharacter* bob = new Character("Bob");

    character->use(0, *bob);
    character->use(0, *bob);
}