#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
_name(name), _weapon(weapon)/////////////////PULIRLO BIEN
{
	std::cout <<  "constructor HumanA " << std::endl;
	std::cout << /* this-> */_name << " has taken a " 
				<< /* this-> */_weapon.get_type() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << "destroy HumanA" << std::endl;
}
void HumanA::attack()
{
	std::cout << _name << " ATTACKS with " ;
	std::cout << _weapon.get_type() << std::endl;
}
