#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string newName);
    void announce() const;
private:
    std::string name;
};

#endif