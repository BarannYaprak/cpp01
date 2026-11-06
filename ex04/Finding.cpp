/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Finding.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:28:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/11/06 19:36:21 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

void	finding(std::string s1, std::string s2, std::string filename)
{
	std::string line;
	std::ifstream infile(filename.c_str());
	std::ofstream outfile ((filename + ".replace").c_str());
	size_t	i = 0;
	if(!infile.is_open())
		std::cout << "Error: File could not be opened or was not found!";
	if (!outfile.is_open())
		std::cout << "Error: File could not be opened or was not found!";
	while(std::getline(infile, line))
	{
		while((i = line.find(s1)) != std::string::npos)
		{	
			outfile << line.substr(0, i);
			//std::cout << line.substr(i) << std::endl;
			outfile << s2;
			line = line.substr(i + s1.length());
			//std::cout << "I: " << i << std::endl;
		}
		outfile << line.substr(0, i);
		outfile << std::endl;
	}
}
