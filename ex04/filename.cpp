#include "filename.hpp"
Filename::Filename(std::string file, std::string s1,std::string s2) 
: _file(file),_s1(s1),_s2(s2)
{
	std::cout << "Constructor Filename created" << std::endl;

	std::cout << "_file: " 	<< _file << std::endl;
	std::cout << "_s1: " 	<< _s1 << std::endl;
	std::cout << "_s2:"		<< _s2 << std::endl;
}
Filename::~Filename()
{
	std::cout << "Destructor Filename" << std::endl;
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
std::string Filename::getTxt()
{
	return(_txt);
}
void	Filename::findReplaceWrite()
{
	const std::string 	new_file = _file;
	std::ofstream		outfile(new_file + ".replace");///crea un nuevo archivo
	size_t				pos;
	size_t 				i = 0;

	if(outfile.fail())
		std::cout << "Failed creating " << new_file << ".replace" << std::endl;
	while (i < getTxt().length())
	{
		pos = getTxt().find(_s1, i);
		if (i == pos)
		{
			outfile << _s2;
			i = i + _s1.length() - 1;	
		}
		else
			outfile << getTxt()[i];
		i++;
	}
	outfile.close();
	return;
}
