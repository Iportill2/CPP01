#include "filename.hpp"
Filename::Filename(std::string file, std::string s1,std::string s2) 
:_s1(s1),_s2(s2)
{
	std::ifstream infile;
	std::string line;

	_file = file.c_str();
	std::cout << "Constructor Filename created" << std::endl;

		infile.open(_file.c_str());
		if(infile.is_open() == false)
		{
			std::cerr << "Cannot open the file" << std::endl;
			infile.close();
			return;
		}
		if (s1.length() == false)
		{
			std::cerr << "s1 is Empty!" << std::endl;
			infile.close();
			return;
		}
		if (_s2.length() == false)
		{
			std::cerr << "s2 is Empty!" << std::endl;
			infile.close();
			return;
		}
		while (std::getline(infile, line))
		{
			_fileContent += line;
			if (!infile.eof())
				_fileContent += "\n";
		}
		infile.close();
		findReplaceWrite();
}
Filename::~Filename()
{
	std::cout << "Destructor Filename" << std::endl;
}

void	Filename::findReplaceWrite()
{
	std::ofstream outfile((_file + ".replace").c_str()); // crea un nuevo archivo
	size_t				pos;
	size_t 				i = 0;

	if(outfile.fail())
	{
		std::cerr << "Failed creating " << _file << ".replace" << std::endl;
		return ;
	}
	while (i < _fileContent.length())
	{
		pos = _fileContent.find(_s1, i);
		if (i == pos)
		{
			outfile << _s2;
			i = i + _s1.length() - 1 ;
		}
		else
			outfile << _fileContent[i];
		i++;
	}
	outfile.close();
	return;
}
