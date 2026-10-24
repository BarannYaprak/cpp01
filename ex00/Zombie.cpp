/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:11:34 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/23 21:08:14 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string z_name)
{
	name = z_name;
}
Zombie::~Zombie()
{
	std::cout << name;
}
void Zombie::announce()
{
	std::cout << name <<": BraiiiiiiinnnzzzZ...";
}