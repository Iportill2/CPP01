#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
static void subject()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
static void owntest()
{
	//WEAPON
	Weapon *A(new Weapon());//constructor sin parametros
	Weapon *B(new Weapon("pala"));//constructor con nombre
	Weapon *C(B);//constructor de copia
	std::cout << "Weapon A type is:"<< A->getType() << std::endl;
	std::cout << "Weapon B type is:"<< B->getType() << std::endl;
	std::cout << "Weapon C type is:"<< C->getType() << std::endl;
	C = A;//sobrecarga de operador=
	std::cout << "++++++++++++++++++++++" << std::endl;
	std::cout << "Weapon C type is:"<< C->getType() << std::endl;
	std::cout << "********************" << std::endl;
	std::cout << "Weapon A type is:"<< A->getType() << std::endl;
	std::cout << "Weapon B type is:"<< B->getType() << std::endl;
	std::cout << "Weapon C type is:"<< C->getType() << std::endl;
	std::cout << "********************" << std::endl;
	
	//HumanA
	HumanA a(*A);//constructor con Weapon
	HumanA b("Jose",*B);//constructor con nombre y Weapon
	HumanA c(b);//contructor de copia
	std::cout  << std::endl;
	std::cout << "a:"; 
	a.attack();
	std::cout << "b:"; 
	b.attack();
	std::cout << "c:"; 
	c.attack();
	c = a;//sobrecarga de operador=
	std::cout << "++++++++++++++++++++++" << std::endl;
	std::cout << "c:";
	c.attack();
	std::cout << "********************" << std::endl;

	///HumanB
	HumanB z;//constructor sin parametros
	HumanB y("pepe");//constructor con nombre
	HumanB x(B);//contructor con arma
	HumanB w(x);//contructor de copia
	std::cout << "z:";
	z.attack();
	std::cout << "y:";
	y.attack();
	std::cout << "x:";
	x.attack();
	std::cout << "w:";
	w.attack();
	std::cout << "++++++++++++++++++++++" << std::endl;
	x = y;//sobrecarga de operador=
	std::cout << "x:";
	x.attack();

	Weapon *X(new Weapon("PALO"));
	std::cout << "Weapon X type is:"<< X->getType() << std::endl;
	std::cout << "x: set(B):" << std::endl;
	x.setWeapon(*X);
	std::cout << "x:";
	x.attack();
	std::cout << "********************" << std::endl;
	delete A;
	delete B;
	delete X;
}
int main()
{
    subject();
    owntest();
    return 0;
}