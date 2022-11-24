/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 07:50:42 by genouf            #+#    #+#             */
/*   Updated: 2022/11/24 17:16:55 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	if (type_char(argv[1]))
		convert_char(argv[1]);
	else if(type_int(argv[1]))
		convert_int(argv[1]);
	else if(type_float(argv[1]))
		convert_float(argv[1]);
	else if(type_double(argv[1]))
		convert_double(argv[1]);
	return (0);
}