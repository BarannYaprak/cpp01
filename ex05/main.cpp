/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 20:31:11 by byaprak           #+#    #+#             */
/*   Updated: 2026/11/06 19:37:21 by byaprak          ###   ########.fr       */
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
