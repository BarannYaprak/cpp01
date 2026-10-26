/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:35:51 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:46:55 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include"Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon&		Wpn;
	
	public:
		HumanA(std::string human_name, Weapon& wpn_ref);
		void	attack();
};