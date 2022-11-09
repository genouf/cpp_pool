/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:18:49 by genouf            #+#    #+#             */
/*   Updated: 2022/11/09 12:12:24 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setContact(std::string first_n, std::string last_n, std::string nick, std::string num, std::string secrt)
{
	this->first_name = first_n;
	this->last_name = last_n;
	this->nickname = nick;
	this->number = num;
	this->secret = secrt;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return this->first_name;
}

std::string Contact::getLastName(void) const
{
	return this->last_name;
}

std::string Contact::getNickname(void) const
{
	return this->nickname;
}

std::string Contact::getNumber(void) const
{
	return this->number;
}

std::string Contact::getSecret(void) const
{
	return this->secret;
}