/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:24:13 by rpet          #+#    #+#                 */
/*   Updated: 2020/08/06 14:49:56 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		replacefile(std::string const filename, std::string s1, std::string s2)
{
	std::ifstream	inputFile(filename);
	
	if (!inputFile.is_open())
	{
		std::cout << std::strerror(errno) << std::endl;
		return (-1);
	}
	std::string		newFilename = filename + ".replace";
	std::ofstream	outputFile(newFilename);

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	outputFile << "test" << std::endl;
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
