/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:44:29 by genouf            #+#    #+#             */
/*   Updated: 2022/11/11 22:01:37 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*la_horde;

	la_horde = zombieHorde(7, "Leo");
	for (int i = 0; i < 7; i++)
		la_horde[i].announce();
	delete [] la_horde;
	return (0);
}