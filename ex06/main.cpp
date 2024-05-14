#include "Harl.hpp"
int main(int argc,char **av)
{
	Harl inst;
	if(argc !=2)
		std::cout << "Invalid arguments" << std::endl;
	else
	{
		int i=inst.cmd(av[1]);
		switch (i)
		{

			case 2:
			{
				std::cout << "[ WARNING ]" << std::endl;
				std::cout << inst.getString_two() << std::endl;
				break;
			}
			case 3:
			{
				std::cout << "[ ERROR ]" << std::endl;
				std::cout << inst.getString_three() << std::endl;
			
				break;
			}
			default:
				std::cout << inst.getString_four() << std::endl;
		}
	}
}
