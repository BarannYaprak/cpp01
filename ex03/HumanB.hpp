/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:39:51 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:01:32 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include"Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		Wpn;
	public:
		HumanB(std::string human_name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& wpn);	
};