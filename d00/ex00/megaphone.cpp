/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:21:40 by genouf            #+#    #+#             */
/*   Updated: 2022/11/08 00:01:28 by genouf           ###   ########.fr       */
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
	char		tmp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				tmp = std::toupper(argv[i][j], loc);
				std::cout << tmp;
				j++;
			}
			i++;
		}
		if (tmp)
			std::cout << std::endl;
	}	
	return (0);
}