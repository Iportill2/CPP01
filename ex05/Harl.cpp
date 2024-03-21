#include "Harl.hpp"
Harl::Harl()
{
	endl_print("Constructor!");
}
Harl::~Harl()
{
	endl_print("Destructor!");
}
void Harl::complain( std::string level )
{
	std::string	lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptrComplain[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int i =0;
	while (i < 4)
	{
		if (level == lvl[i])
		{
			(this->*ptrComplain[i])();
			return ;
		}
		i++;
	}
	std::cout << "Unexpected input" << std::endl;
}
void Harl::endl_print(std::string s)
{
	std::cout << s << std::endl;
}
void Harl::_debug()
{
	endl_print("Debug messages contain contextual information. They are mostly used for problem diagnosis") ;
}
void Harl::_info()
{
	endl_print("Info messages contain extensive information. They are helpful for tracing program execution in a production environment.");
}
void Harl::_warning()
{
	endl_print("Warning messages indicate a potential issue in the system. However, it can be handled or ignored.");
}
void Harl::_error()
{
	endl_print("Error messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.");
}