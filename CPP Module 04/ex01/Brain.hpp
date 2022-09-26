#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator=(const Brain& other);

    static const int ideasNum = 100;

    std::string ideas[Brain::ideasNum];
};

#endif