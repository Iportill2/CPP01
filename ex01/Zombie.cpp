#include "Zombie.hpp"

Zombie::Zombie()
{
std::cout << "Create nameless Zombie" << std::endl;
}
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Create " << _name  << " Zombie" << std::endl;
	
}
Zombie::~Zombie()
{
std::cout << "Destroy " << _name  << " Zombie" << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}
void Zombie::announce()
{
	std::cout << /* this-> */_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
