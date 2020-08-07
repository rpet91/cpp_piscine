/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:24:13 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/07 09:16:29 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		replacefile(std::string const filename, std::string s1, std::string s2)
{
	std::ifstream	inputFile(filename);
	std::string		newLine;
	
	if (!inputFile.is_open())
	{
		std::cout << std::strerror(errno) << std::endl;
		return (-1);
	}
	std::string		newFilename = filename + ".replace";
	std::ofstream	outputFile(newFilename);
	size_t len = s2.length();
	while (getline(inputFile, newLine))
	{
		while (true)
		{
			size_t pos = newLine.find(s1);
			if (pos == std::string::npos)
				break;
			newLine.replace(pos, len, s2);
		}
		outputFile << newLine << std::endl;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong amount of arguments" << std::endl;
	else
		replacefile(argv[1], argv[2], argv[3]);
	return (0);
}
