/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:04:30 by genouf            #+#    #+#             */
/*   Updated: 2022/11/24 19:28:08 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "main.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));		
}

int	main(void)
{
	Data		data_struct;
	Data		*new_data_struct;
	uintptr_t	tmp;

	data_struct.x = 12;
	data_struct.y = 24;
	std::cout << "X is " << data_struct.x << std::endl;
	std::cout << "Y is " << data_struct.y << std::endl;
	tmp = serialize(&data_struct);
	new_data_struct = deserialize(tmp);
	std::cout << "X is " << data_struct.x << std::endl;
	std::cout << "Y is " << data_struct.y << std::endl;
	return (0);	
}