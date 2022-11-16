/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 17:18:45 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	gilbert("Gilbert");
	ScavTrap	maurice("Maurice");
	ScavTrap	rien;

	gilbert.attack("Maurice");
	std::cout << "Rien BEFORE : ";
	rien.attack("allez");
	gilbert.takeDamage(20);
	gilbert.beRepaired(2);
	gilbert.guardGate();
	rien = maurice;
	std::cout << "Rien AFTER : ";
	rien.beRepaired(1);
	return (0);
}