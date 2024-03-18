#include "Weapon.hpp"

/* Weapon::Weapon(std::string type)
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
	///std::cout << "settypeWeapon" << std::endl;
	_type=type;
} */
Weapon::Weapon(std::string weapon): _type(weapon)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}