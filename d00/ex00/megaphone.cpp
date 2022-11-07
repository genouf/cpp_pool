/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:21:40 by genouf            #+#    #+#             */
/*   Updated: 2022/11/07 15:22:12 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <string>

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	std::locale loc;

	if (argc == 1)
	{
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << std::toupper(argv[i][j], loc);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}	
	return (0);
}