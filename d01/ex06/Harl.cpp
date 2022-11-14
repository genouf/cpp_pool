/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:53:21 by genouf            #+#    #+#             */
/*   Updated: 2022/11/14 09:21:21 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level) const
{
	const std::string	tab_str[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	int					i;
	
	i = 0;
	while (!tab_str[i].empty() && level.compare(tab_str[i]) != 0)
		i++;
	switch (i)
	{
		case 0 :
			this->debug();
			__attribute__((fallthrough));
		case 1 :
			this->info();
			__attribute__((fallthrough));
		case 2 :
			this->warning();
			__attribute__((fallthrough));
		case 3 :	
			this->error();
			break;
		default:
			std::cout << "Invalid complaint !" << std::endl;
	}
	return ;
}