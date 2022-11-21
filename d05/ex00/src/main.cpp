/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:47 by genouf            #+#    #+#             */
/*   Updated: 2022/11/21 17:37:35 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	igor = Bureaucrat("Igor", 1);
	Bureaucrat	dosgor = Bureaucrat("Dosgor", 150);
	Bureaucrat	brice = Bureaucrat("Brice", 6);

	try	
	{
		Bureaucrat nok = Bureaucrat("Henrique", 0);
		std::cout << nok;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ok = Bureaucrat("Paul", 2);
		std::cout << ok;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		igor.upGrade();
		std::cout << igor;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		dosgor.downGrade();
		std::cout << dosgor;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		brice.downGrade();
		std::cout << brice;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}