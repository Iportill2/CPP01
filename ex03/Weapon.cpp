#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "Undefined Type";
}
Weapon::Weapon(std::string weapon): _type(weapon)
{
}
Weapon::Weapon(const Weapon & copy)
{
	this->_type = copy._type;
}
Weapon & Weapon::operator=(Weapon const & inst)
{
	this->_type= inst._type;
	return(*this);
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