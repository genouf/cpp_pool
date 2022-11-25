/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:18:42 by genouf            #+#    #+#             */
/*   Updated: 2022/11/25 16:55:02 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int	main(void)
{
	const int			tab_int[] = {6, 2, 1, 12};
	const std::string	tab_str[] = {"lol", "mdr", "xd", ".."};
	const double		tab_d[] = {6.0, 2.0, 1.0, 12.0};

	std::cout << "====== INT PRINT ======" << std::endl;
	iter(tab_int, 4, printcpp);
	std::cout << "====== STRING PRINT ======" << std::endl;
	iter(tab_str, 4, printcpp);
	std::cout << "====== DOUBLE PRINT ======" << std::endl;
	iter(tab_d, 4, printcpp);
	return (0);
}