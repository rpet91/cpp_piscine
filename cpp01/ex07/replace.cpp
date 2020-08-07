/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:24:13 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/07 10:03:57 by rpet          ########   odam.nl         */
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
	size_t len = s1.length();
	while (getline(inputFile, newLine))
	{
		size_t pos = newLine.find(s1);
		while (true)
		{
			if (pos == std::string::npos)
				break;
			newLine.replace(pos, len, s2);
			pos = newLine.find(s1, pos + s2.length());
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
