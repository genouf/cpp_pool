/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 17:34:27 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	gilbert("Gilbert");
	FragTrap	maurice("Maurice");
	FragTrap	rien;

	gilbert.attack("Maurice");
	std::cout << "Rien BEFORE : ";
	rien.attack("allez");
	gilbert.takeDamage(20);
	gilbert.beRepaired(2);
	gilbert.highFivesGuys();
	rien = maurice;
	std::cout << "Rien AFTER : ";
	rien.beRepaired(1);
	return (0);
}