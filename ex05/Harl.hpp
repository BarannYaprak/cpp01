/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:48:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/11/02 20:36:42 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#define RED		"\033[0;31m"
#define YELLOW	"\033[0;33m"
#define CYAN	"\033[0;36m"
#define GREEN	"\033[0;32m"
#define RESET	"\033[0m"
#define PURPLE	"\033[0;35m"


class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*functions[4])(void);
		std::string func_name[4];
	public:
		Harl();
		void complain(std::string level);
};