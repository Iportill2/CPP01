#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	(void)N;
	Zombie *inst = new Zombie(name);
	return(inst);
}