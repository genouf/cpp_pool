/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:37 by genouf            #+#    #+#             */
/*   Updated: 2022/11/13 22:25:16 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}