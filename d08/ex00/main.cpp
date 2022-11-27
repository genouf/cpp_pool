/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:02:14 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 17:01:14 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v;
	std::deque<int> d;
	
	v.push_back(2);
	v.push_back(6);
	v.push_back(12);
	v.push_back(24);

	d.push_front(2);
	d.push_front(7);
	d.push_front(14);
	d.push_front(28);

	std::cout << "====== VECTOR ======" << std::endl;
	try
	{
		easyfind(v, 6);
		std::cout << "6 is in this container !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot find this value !" << std::endl;
	}
	try
	{
		easyfind(v, 7);
		std::cout << "7 is in this container !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot find this value !" << std::endl;
	}
	
	std::cout << "====== DEQUE ======" << std::endl;
	try
	{
		easyfind(d, 7);
		std::cout << "7 is in this container !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot find this value !" << std::endl;
	}
	try
	{
		easyfind(d, 6);
		std::cout << "6 is in this container !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot find this value !" << std::endl;
	}
	return (0);
}