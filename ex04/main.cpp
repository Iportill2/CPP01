#include "filename.hpp"
void	findReplaceWrite(std::string txt, std::string s1, std::string s2)
{
	const std::string 	new_file = "file";
	std::ofstream		outfile(new_file + ".replace");///crea un nuevo archivo
	size_t				pos;
	size_t 				i = 0;

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
		while (infile.get(c))
			txt = txt + c;
		findReplaceWrite(txt, inst.gets1(), inst.gets2());
/* 		inst.endl_print(inst.gets1());//
		inst.endl_print(inst.gets2());//
		inst.endl_print(txt);// */
		infile.close();
		return(1);
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return(0);
}

/*

int main() {
    std::ifstream archivoEntrada;
    archivoEntrada.open("archivo.txt"); // Abre el archivo "archivo.txt" para lectura

    if (!archivoEntrada) {
        std::cerr << "Error al abrir el archivo" << std::endl;
        return 1;
    }

    // Aquí puedes leer desde el archivo usando el objeto archivoEntrada

    archivoEntrada.close(); // Cierra el archivo después de terminar de leer

    return 0;
}




int	findReplaceWrite(std::string infile, const std::string txt, const std::string s1, const std::string s2)
{
	std::ofstream	outfile(infile + ".replace");
	size_t			pos;

	if (!outfile.is_open())
		return (std::cerr << "Unexpected outfile" << std::endl, 1);
	 if (!s1.length())
		return (0); 
	for (size_t i = 0; i < txt.length(); i++)
	{
		pos = txt.find(s1, i);
		if (i == pos)
		{
			outfile << s2;
			i += s1.length() - 1;	
		}
		else
			outfile << txt[i];
	}
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::string		txt;
	char			c;
	
	if (argv[1])
		file.open(argv[1]);
	
	if (argc != 4 || !file.is_open())
		return (std::cerr << "USAGE\nThis program needs 3 arguments:\n1st: \
		Existing input file with read permission\n2nd: \
		Ocurrence to be replaced\n3rd: \
		Ocurrence with which to replace" << std::endl, 1);
	
	while (file.get(c))
		txt += c;
	file.close();
			
	return (findReplaceWrite(argv[1], txt, argv[2], argv[3]));
}
*/