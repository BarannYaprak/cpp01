/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:46:18 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:09:21 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<HumanA.hpp>

HumanA::HumanA(std::string human_name, Weapon& wpn_ref)
    :name(human_name), Wpn(wpn_ref)
{
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name << "attacks with their" << Wpn.getType();
}