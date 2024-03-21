#include "Harl.hpp"
Harl::Harl()
{
	//endl_print("Constructor");
	_debug="DEBUG";
	_info="INFO";
	_warning="WARNING";
	_error="ERROR";
	_two = "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.";
	_three = "This is unacceptable, I want to speak to the manager now.";
	_four = "[ Probably complaining about insignificant problems ]";
}
Harl::~Harl()
{
	//endl_print("Destructor");
}

void Harl::endl_print(std::string s)
{
	std::cout << s << std::endl;
}
int Harl::cmd(std::string cmd)
{
/* 	if(cmd == _debug)
		return(0);
	else if(cmd == _info)
		return(1); */
	if(cmd == _warning)
		return(2);
	else if(cmd == _error)
		return(3);
	else
		return(4);
}
std::string Harl::getString_two()
{
	return(_two);
}
std::string Harl::getString_three()
{
	return(_three);
}
std::string Harl::getString_four()
{
	return(_four);
}