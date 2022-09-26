#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

# include <string>

class ICharacter;

class AMateria
{
public:
    AMateria(const std::string& type);
    virtual ~AMateria();

    const std::string& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    std::string _type;

private:
    AMateria();
};

#endif