/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 08:46:27 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int	main(void)
{
	Claptrap	maurice("Maurice");

	maurice.attack("albert");
	maurice.takeDamage(1);
	maurice.beRepaired(1);
	maurice.takeDamage(100);
	return (0);
}