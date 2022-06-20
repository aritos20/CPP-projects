# include <iostream>
# include <fstream>
# include <string>
# include <filesystem>
# include <cstdlib>
# include <sys/stat.h>

void	replace(char **argv)
{
	std::ifstream	file;
	std::ofstream	output_file;
	std::string		line;
	std::string		output_line;
	int				pos;

	chmod(argv[1], S_IRWXU|S_IRWXG|S_IROTH|S_IWOTH);
	file.open(argv[1], std::ifstream::in);
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			while ((pos = line.find(argv[2])) >= 0)
			{
				line.erase(pos, strlen(argv[2]));
				line.insert(pos, argv[3]);
			}
			output_line.append(line);
			output_line.append("\n");
		}
		if (output_line.size() > 0)
			output_line.erase(output_line.size() - 1, 1);
	}
	else
	{
		std::cout << "Error: file not found" << std::endl;
		return;
	}
	file.close();
	output_file.open(argv[1]);
	if (output_file.is_open())
		output_file << output_line;
	output_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv);
	else
	{
		std::cout << "Tiene que estar el nombre del archivo y las 2 cadenas de caracteres" << std::endl;
		return 0;
	}
}