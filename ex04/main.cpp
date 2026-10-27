/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:07:38 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/27 02:26:05 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: You have entered an incorrect number of arguments." 
		<< ac << std::endl;
		return (0);
	}
	finding(av[1], av[2], av[3]);
}