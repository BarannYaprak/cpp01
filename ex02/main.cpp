/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:15:37 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/24 23:38:34 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "STR ADRESS: " << &str << std::endl;
	std::cout << "PTR ADRESS: " << ptr << std::endl;
	std::cout << "REF ADRESS: " << &ref << std::endl;

	std::cout << "STR: " << str << std::endl;
	std::cout << "PTR: " << *ptr << std::endl;
	std::cout << "REF: " << ref << std::endl;
	return (0);
}