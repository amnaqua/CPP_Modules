#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

#include <string>

class HumanB 
{
public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(const Weapon &weapon);
private:
	std::string name;
	Weapon* weapon;
};

#endif