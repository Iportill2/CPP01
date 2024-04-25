#include "Zombie.hpp"
Zombie::Zombie() : _name("Unnamed")
{
	std::cout <<  _name << " zombie has been created with Default Constructor" << std::endl;
}
Zombie::Zombie(std::string name): _name(name)
{
	
	std::cout << _name << " zombie has been created with Constructor " << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "zombie named " << _name << " Died"<< std::endl;
}


void Zombie::announce()
{
	std::cout << _name << " Say: BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return _name;
}
void Zombie::setName(std::string name)
{
	_name = name;
}