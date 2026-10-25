/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 21:05:16 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/24 23:22:39 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "Gleen");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;

	return (0);
}