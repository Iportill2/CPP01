#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	std::cout << this->_name << " does not have any weapon 🖐️"
	<< std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << /* this-> */_name << " died 💀" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their "
	<< _weapon->getType() << std::endl;
}
