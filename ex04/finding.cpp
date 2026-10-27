/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finding.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:28:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/27 02:43:10 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

void	finding(std::string s1, std::string s2, std::string filename)
{
	std::string line;
	std::ifstream infile(filename.c_str());
	std::ofstream outfile ((filename + ".replace").c_str());
	int	i = 0;
	int index;
	if(!infile.is_open())
		std::cout << "Error: File could not be opened or was not found!";
	if (!outfile.is_open())
		std::cout << "Error: File could not be opened or was not found!";
	while(std::getline(infile, line))
	{
		index = 0;
		while((i = line.find(s1, index)) != std::string::npos)
		{
			outfile << line.substr(0, i);
			outfile << s2;
			index = i + s1.length();
		}
		outfile << std::endl;
	}
}
