#include "Zombie.hpp"
int main()
{
	int N = 4;
	std::string s= "Paco";
	Zombie *horde =zombieHorde(N,s);//create horde
	int i =0;
	while(i < N)
	{
		horde[i].announce();//BraiiiiiiinnnzzzZ...
		i++;
	}
	delete[] (horde);//la sintaxsis para liberar el *horde
	return(1);
}
