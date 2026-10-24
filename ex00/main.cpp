/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:30:54 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/23 23:36:49 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
	Zombie* ptr = newZombie("Rick");
	ptr->announce();
	delete ptr;
	randomChump("gleen");
	return (0);
}