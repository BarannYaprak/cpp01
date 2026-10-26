/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:28:25 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:03:53 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
}

Weapon::~Weapon()
{

}

std::string&	Weapon::getType()
{
	std::string& ref = type;

	return (ref);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}