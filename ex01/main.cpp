#include "Zombie.hpp"
int main()
{
	std::cout << "*****************" << std::endl;
	Zombie a;
	std::cout << "1 Zombie a name is " << a.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	Zombie b("pepe");
	std::cout << "2 Zombie a name is " << a.getName() << std::endl;
	std::cout << "3 Zombie b name is " << b.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	Zombie c(a);
	std::cout << "4 Zombie a name is " << a.getName() << std::endl;
	std::cout << "5 Zombie b name is " << b.getName() << std::endl;
	std::cout << "6 Zombie c name is " << c.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	c = b;
	std::cout << "7 Zombie a name is " << a.getName() << std::endl;
	std::cout << "8 Zombie b name is " << b.getName() << std::endl;
	std::cout << "9 Zombie c name is " << c.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	std::cout << "Use announce in a, b , c:" << std::endl;
	std::cout << "*****************" << std::endl;
	a.announce();
	b.announce();
	c.announce();

	std::cout << "*****************" << std::endl;
	std::cout << "Use setName in a, b , c:" << std::endl;
	a.setName("a");
	b.setName("b");
	c.setName("c");
	std::cout << "*****************" << std::endl;
	a.announce();
	b.announce();
	c.announce();


	std::cout << "memory direction of a is:" << &a << std::endl;
	std::cout << "memory direction of b is:" << &b << std::endl;
	std::cout << "memory direction of c is:" << &c << std::endl;

	int N = 4;
	std::string s = "Paco";
	Zombie *horde = zombieHorde(N,s);//create horde
	std::cout << "memory direction of horde is:" << horde << std::endl;
	int i =0;
	while(i < N)
	{
		horde[i].announce();//BraiiiiiiinnnzzzZ...
		std::cout << "memory direction of horde[" << i << "] is:"<< &horde[i]<< std::endl;
		i++;
	}
	delete[] (horde);//la sintaxsis para liberar el *horde
	return(1);
}
