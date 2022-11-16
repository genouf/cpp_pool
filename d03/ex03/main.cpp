/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 19:29:19 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrapp	rihanna("Rihanna");

	rihanna.whoAmI();
	rihanna.attack("Chris");
	rihanna.takeDamage(10);
	return (0);
}