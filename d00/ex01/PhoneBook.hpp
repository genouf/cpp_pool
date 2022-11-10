/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:34:09 by genouf            #+#    #+#             */
/*   Updated: 2022/11/10 10:00:44 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook	{

public:
	PhoneBook(void);
	~PhoneBook();
	int		add_contact(void);
	void	search(void) const;

private:
	Contact	_content[8];
	int		_end_index;
	int		_current_index;
	
	void	_init_contact(std::string stock[]);
	void	_print_field(Contact contact, int index) const;
	void	_print_all_field(Contact contact) const;
	void	_print_data(std::string str) const;
	int		_check_index(std::string input) const;
};

#endif