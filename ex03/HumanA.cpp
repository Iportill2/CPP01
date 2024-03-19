#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
	std::cout << /* this-> */_name << " has taken a " 
				<< /* this-> */_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << /* this-> */_name << " died 💀" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << /* this-> */_name << " attacks with " << /* this-> */_weapon.getType() << std::endl;
}

//aki crearia una funcion para meter los valores de  name en _name y de weapon en _weapon