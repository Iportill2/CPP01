#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanB
{
private:
	std::string _name;
	std::string _weapon;

public:
	HumanB();
	HumanB(std::string _name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};



#endif