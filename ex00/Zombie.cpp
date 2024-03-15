#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << this->_name << " zombie has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "zombie named " << this->_name << " Died"<< std::endl;
}


void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

