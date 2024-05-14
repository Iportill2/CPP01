#include "Harl.hpp"
int main(int argc,char **av)
{
	Harl inst;
	if(argc !=2)
		inst.endl_print("Invalid arguments");
	else
	{
		int i=inst.cmd(av[1]);
		switch (i)
		{

			case 2:
			{
				inst.endl_print("[ WARNING ]");
				inst.endl_print(inst.getString_two());
				break;
			}
			case 3:
			{
				inst.endl_print("[ ERROR ]");
				inst.endl_print(inst.getString_three());
				break;
			}
			default:
				inst.endl_print(inst.getString_four());
		}
	}
}
