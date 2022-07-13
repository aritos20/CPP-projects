/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:21 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 20:22:32 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>
# include <filesystem>
# include <cstdlib>
# include <sys/stat.h>

int	replace(char **argv)
{
	std::ifstream	file;
	std::ofstream	output_file;
	std::string		line;
	std::string		output_line;
	std::string		file_modified;
	int				pos;

	file.open(argv[1], std::ifstream::in);
	if (file.fail())
	{
		std::cout << "Could not open " << argv[1] << " please enter a valid file" << std::endl;
		file.close();
		return -1;
	}
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
	file.close();
	file_modified = argv[1];
	file_modified.append(".replace");
	output_file.open(file_modified);
	if (output_file.is_open())
		output_file << output_line;
	output_file.close();
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		return (replace(argv));
	else
	{
		std::cout << "Tiene que estar el nombre del archivo y las 2 cadenas de caracteres" << std::endl;
		return 0;
	}
}