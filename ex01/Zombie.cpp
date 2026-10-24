/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:45:11 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/24 20:47:16 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string z_name)
{
	name = z_name;
}

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie()
{
	std::cout << name << "is delete" << std::endl;
}

void Zombie::setname(std::string z_name)
{
	name = z_name;
}