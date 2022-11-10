/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:18:32 by genouf            #+#    #+#             */
/*   Updated: 2022/11/10 09:29:57 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_help(void)
{
	std::cout << "ADD : add a new entry in the PhoneBook" << std::endl;	
	std::cout << "SEARCH : find a entry in the PhoneBook" << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Welcome in the PhoneBook !" << std::endl << std::endl;
	std::cout << "Send a command (HELP for more informations) : ";
	std::getline(std::cin, input);
	while (!std::cin.eof() && input.compare("EXIT") != 0)
	{
		std::cout << std::endl;
		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact();			
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		else if (input.compare("HELP") == 0)
			print_help();
		else
			std::cout << "Wrong command !" << std::endl;
		std::cout << std::endl << "Send a command (HELP for more informations) : ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		std::cout << std::endl << "Dont press CTRL-D please !" << std::endl; 
	return (0);
}
