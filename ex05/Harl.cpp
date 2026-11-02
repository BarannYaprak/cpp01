/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:04:00 by byaprak           #+#    #+#             */
/*   Updated: 2026/11/02 22:04:38 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug(void)
{
	std::cout << YELLOW 
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< RESET << std::endl;
}
void Harl::info(void)
{
	std::cout << GREEN
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout << PURPLE
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
		<< RESET << std::endl;
}

void Harl::error(void)
{
	std::cout << RED
		<< "This is unacceptable! I want to speak to the manager now."
		<< RESET << std::endl;
}

Harl::Harl(void)
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
	func_name[0] = "DEBUG";
	func_name[1] = "INFO";
	func_name[2] = "WARNING";
	func_name[3] = "ERROR";
}

void Harl::complain(std::string level)
{
	int i = 0;

	while (i < 4)
	{
		if (func_name[i] == level)
			break;
		i++;
	}
	if (i >= 4)
		return;
	(this->*functions[i])();
}