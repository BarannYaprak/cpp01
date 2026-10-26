/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:02:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:57:24 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string human_name)
{
	name = human_name;
	Wpn = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << (*Wpn).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wpn_ref)
{
	Wpn = &wpn_ref;
}