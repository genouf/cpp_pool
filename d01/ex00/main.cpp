/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:57:39 by genouf            #+#    #+#             */
/*   Updated: 2022/11/11 20:37:08 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_1;
	Zombie	*new_2;

	randomChump("Georges");
	new_1 = newZombie("Mickael");
	delete new_1;
	randomChump("Cassandre");
	new_2 = newZombie("Louise");
	delete new_2;
	return (0);
}