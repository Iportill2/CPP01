#include "Zombie.hpp"
void randomChump( std::string name )
{
	Zombie	inst = Zombie(name);
	inst.announce();
}