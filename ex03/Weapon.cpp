#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
	std::cout << "constructorWeapon" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "destructorWeapon" << std::endl;
}
std::string Weapon::get_type()
{
	return(_type);
}
void Weapon::setType(std::string type)
{
	_type=type;
}