#include "filename.hpp"

int main(int ac,char **av)
{
	if(ac == 4)
	{
		Filename inst(av[1],av[2],av[3]);
		
		return(0);
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return(1);
}
/*
std::ifstream iFile;
	iFile.open(this->_filename.c_str());
	if (iFile.fail())
	{
		this->status = 2;
		return ;
	}
	std::string	fileContent;
	std::string line;
	while (std::getline(iFile, line))
	{
		//std::cout << line;
		fileContent += line + "\n";
	}
	iFile.close();
*/