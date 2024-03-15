#include "Zombie.hpp"
int main()
{
	int N = 4;
	std::string s= "JoseLuis";
	Zombie *horde =zombieHorde(N,s);
	int i =0;
	while(i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] (horde);
	return(1);
}
