/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 09:08:21 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrapp	rihanna("Rihanna");
	DiamondTrapp	nolose;

	rihanna.whoAmI();
	rihanna.attack("Chris");
	rihanna.takeDamage(10);
	nolose.beRepaired(100);
	nolose.attack("personne");
	return (0);
}