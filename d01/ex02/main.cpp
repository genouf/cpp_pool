/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:08:20 by genouf            #+#    #+#             */
/*   Updated: 2022/11/12 11:24:05 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "Address of str : " << &str << std::endl;
	std::cout << "Address of ptr : " << ptr << std::endl;
	std::cout << "Address of ref : " << &ref << std::endl << std::endl;

	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of ptr : " << *ptr << std::endl;
	std::cout << "value of ref : " << ref << std::endl;
	return (0);
}