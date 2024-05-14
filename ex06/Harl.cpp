#include "Harl.hpp"
Harl::Harl()
{
	_warning="WARNING";
	_error="ERROR";
	_two = "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.";
	_three = "This is unacceptable, I want to speak to the manager now.";
	_four = "[ Probably complaining about insignificant problems ]";
}
Harl::~Harl(){}

int Harl::cmd(std::string cmd)
{

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