/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:18:32 by genouf            #+#    #+#             */
/*   Updated: 2022/11/09 12:03:08 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::getline(std::cin, input);
	while (!std::cin.eof() && input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact();			
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.print_index();
		}
		std::getline(std::cin, input);
	}
	return (0);
}
