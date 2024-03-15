#include "HumanB.hpp"
HumanB::HumanB()
{
	std::cout << "createHumanB()" << std::endl;
}
HumanB::HumanB(std::string _name)
{
	std::cout << "createHumanB " << _name << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "destroyHumanB" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << "setWeaponHumanB" << &weapon << std::endl;
}
void HumanB::attack()
{
	std::cout << _name << " ****attack with ******" ;
	std::cout << H._weapon << std::endl;
}
