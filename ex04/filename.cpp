#include "filename.hpp"
Filename::Filename()
{
	endl_print("DEFAULT Constructor");
}
Filename::Filename(std::string file, std::string s1,std::string s2) 
: _file(file),_s1(s1),_s2(s2)
{
	endl_print("Constructor");
	print("_file = ");
	endl_print(_file);
	print("_s1 = ");
	endl_print(_s1);
	print("_s2 = ");
	endl_print(_s2);
}
Filename::~Filename()
{
		endl_print("Destructor");
}
void Filename::print(std:: string s)
{
	std::cout << s;
}
void Filename::endl_print(std:: string s)
{
	std::cout << s << std::endl;
}
std::string Filename::getFile()
{
	return(_file);
}
std::string Filename::gets1()
{
	return(_s1);
}
std::string Filename::gets2()
{
	return(_s2);
}
