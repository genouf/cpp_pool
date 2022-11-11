/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:34:12 by genouf            #+#    #+#             */
/*   Updated: 2022/11/11 08:51:35 by genouf           ###   ########.fr       */
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

void	PhoneBook::_print_field(Contact contact, int index) const
{
	std::cout << index << " | ";
	_print_data(contact.getFirstName());
	std::cout << " | ";
	_print_data(contact.getLastName());
	std::cout << " | ";
	_print_data(contact.getNickname());
	std::cout << std::endl;
}

void	PhoneBook::_print_all_field(Contact contact) const
{
	std::cout << std::endl << "First Name : " << contact.getFirstName() << std::endl;
	std::cout << "Last Name : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickname() << std::endl;
	std::cout << "Number : " << contact.getNumber() << std::endl;
	std::cout << "Secret : " << contact.getSecret() << std::endl;
}

int	PhoneBook::_check_index(std::string input) const
{
	char	i;

	i = 0;
	while (i < this->_end_index)
	{
		if (i + 48 == (char)input[0])
			return (i);
		i++;
	}
	return (-1);
}

void	PhoneBook::search(void) const
{
	int			i;
	int			ok;
	std::string	input;

	if (this->_end_index == 0)
	{
		std::cout << "The PhoneBook is empty !" << std::endl;
		return ;
	}
	i = -1;
	while (++i < this->_end_index)
		_print_field(this->_content[i], i);
	ok = 0;
	while (!std::cin.eof() && ok == 0)
	{
		std::cout << std::endl << "Please enter the index of the contact you want to look at : ";
		std::getline(std::cin, input);
		if (_check_index(input) != -1)
		{
			ok = 1;
			_print_all_field(this->_content[_check_index(input)]);
			return ;
		}
		else
			std::cout << "This is not a valid index !" << std::endl;
	}
	std::cout << "End of line detected !" << std::endl;
	return ;
}