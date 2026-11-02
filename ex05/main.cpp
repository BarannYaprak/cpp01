/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 20:31:11 by byaprak           #+#    #+#             */
/*   Updated: 2026/11/02 22:03:33 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{ 
	Harl harl;

	std::cout << "*** DEBUG TEST ***" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << "*** INFO TEST ***" <<std::endl; 
	harl.complain("INFO");
	
	std::cout << "**** WARNING TEST ***" << std::endl;
	harl.complain("WARNING");
	
	std::cout << "***ERROR TEST ***" << std::endl;
	harl.complain("ERROR");
	
	std::cout << "*** INVALID LEVEL TEST ***" << std::endl;
	harl.complain("seagfault");

	return (0);
}

/*int	main(int ac, char **av)
{
	Harl message;

	if (ac == 1)
	{
		std::cout << CYAN << "Please enter a valid argument" << RESET << std::endl;
		return (1);
	}
	else if (ac > 2)
	{
		std::cout << CYAN << "Please enter a one valid argument" << RESET << std::endl;
		return (1);
	}
	message.complain(av[1]);
	return (0);
}*/