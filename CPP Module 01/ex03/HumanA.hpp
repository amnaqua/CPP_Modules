#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#include <string>

class HumanA 
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack() const;
private:
	std::string name;
	Weapon &weapon;
};

#endif