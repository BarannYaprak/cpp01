/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:15:54 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/24 21:06:54 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string z_name);
		Zombie();
		~Zombie();
		void setname(std::string z_name);
};

Zombie* zombieHorde(int N, std::string name);