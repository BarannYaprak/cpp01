/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:21:22 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/26 01:03:28 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string weapon_type);
		~Weapon();
		std::string&	getType();
		void			setType(std::string new_type);
};