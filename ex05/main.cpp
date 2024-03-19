#include "Harl.hpp"
int main()
{
	Harl ins;
	std::string cmd;
	while(1)
	{
		if (std::cin.eof()) //if eof/ctrl+D terminate
			return (ins.endl_print("Caution you push Ctrl+D = eof"),0);
		else
		{
			ins.endl_print("Please insert a command: DEBUG,INFO,WARNING;DEBUG");
			std::getline (std::cin,cmd);
			ins.complain(cmd);
		}
	}
}