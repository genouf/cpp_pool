/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:47 by genouf            #+#    #+#             */
/*   Updated: 2022/11/22 10:06:56 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	gerard = Bureaucrat("Gerard", 10);
	Bureaucrat	maurice = Bureaucrat("Maurice", 120);
	Form		test = Form("Test", 50, 40);

	try	
	{
		Form nok = Form("Quality", 160, 2);
		std::cout << nok;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try	
	{
		Form ok = Form("Improvement", 140, 2);
		std::cout << ok;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << test;
	gerard.signForm(test);
	maurice.signForm(test);
	gerard.signForm(test);
	return (0);
}