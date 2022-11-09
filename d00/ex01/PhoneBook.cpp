/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:34:12 by genouf            #+#    #+#             */
/*   Updated: 2022/11/09 12:23:38 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {

	this->_current_index = 0;	
	this->_end_index = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

/*						ADD						*/

void	PhoneBook::_init_contact(std::string stock[]) 
{
	
	this->_content[this->_current_index].setContact(stock[0], stock[1], stock[2], stock[3], stock[4]); 
	if (this->_current_index == 7)
		this->_current_index = 0;
	else
		this->_current_index++;
	if (this->_end_index != 8)
		this->_end_index++;
}

int	PhoneBook::add_contact(void) 
{
	
	const std::string	tab[] = {"first name : ", "last name : ", "nickname : ", "number : ", "secret : ", "\0"};
	std::string			stock[5];
	int					i;
	
	i = 0;
	while (i < 5)
	{
		std::cout << "-> Enter " << tab[i];
		std::getline(std::cin, stock[i]);
		while (!std::cin.eof() && stock[i].empty())
		{
			std::cout << "Please enter something !" << std::endl;
			std::cout << "-> Enter " << tab[i];
			std::getline(std::cin, stock[i]);
		}
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "End of Line detected !" << std::endl;
			i = 6;
		}
		i++;
	}
	if (i == 6)
		return (1);
	_init_contact(stock);
	return (0);
}

/*						SEARCH						*/

void	PhoneBook::_print_data(std::string str) const 
{
	int	i;

	i = 0;
	while (str[i] && i < 10)
	{
		std::cout << str[i];
		i++;
	}
	if (i == 10)
		std::cout << ".";
}

void	PhoneBook::_print_field(Contact contact) const
{
	_print_data(contact.getFirstName());
	std::cout << "|";
	_print_data(contact.getLastName());
	std::cout << "|";
	_print_data(contact.getNickname());
	std::cout << "|";
	_print_data(contact.getNumber());
	std::cout << "|";
	_print_data(contact.getSecret());
	std::cout << std::endl;
}

void	PhoneBook::print_index(void) 
{
	int	i;
	
	i = 0;
	while (i < this->_end_index)
	{
		_print_field(this->_content[i]);
		i++;
	}
}