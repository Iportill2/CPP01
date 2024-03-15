#include "Zombie.hpp"
void randomChump( std::string name )
{
	Zombie	inst = Zombie(name);
	inst.announce();
	//It creates a zombie, name it, and the zombie announces itself.
	/* setname(name);
	announce(); */

}