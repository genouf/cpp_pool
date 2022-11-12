/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:25:37 by genouf            #+#    #+#             */
/*   Updated: 2022/11/12 18:57:46 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}

std::string	&Weapon::getType(void)
{
	std::string &ref = this->_type;
	return	ref;
}