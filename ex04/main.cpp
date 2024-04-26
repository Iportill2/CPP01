#include "filename.hpp"
void	findReplaceWrite(std::string txt, std::string s1, std::string s2,std::string filename)
{
	const std::string 	new_file = filename;
	std::ofstream		outfile(new_file + ".replace");///crea un nuevo archivo
	size_t				pos;
	size_t 				i = 0;
	if(outfile.fail())
		std::cout << "Failed creating " << new_file << ".replace" << std::endl;
	while (i < txt.length())
	{
		pos = txt.find(s1, i);
		if (i == pos)
		{
			outfile << s2;
			i = i + s1.length() - 1;	
		}
		else
			outfile << txt[i];
		i++;
	}
	outfile.close();
	return;
}
int main(int ac,char **av)
{
	if(ac == 4)
	{
		Filename inst(av[1],av[2],av[3]);
		std::ifstream infile;
		std::string txt;
		char c;

		infile.open(inst.getFile());
		if(infile.is_open() == false)
			return(inst.endl_print("Cannot open the file"),0);
		if (!inst.gets1().length())
			return (inst.endl_print("s1 is Empty!"),0);
		if (!inst.gets2().length())
			return (inst.endl_print("s2 is Empty!"),0);
		while (infile.get(c) )
			txt = txt + c;
		findReplaceWrite(txt, inst.gets1(), inst.gets2(),inst.getFile());
		infile.close();
		return(1);
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return(0);
}
