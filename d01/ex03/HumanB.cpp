/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:16:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/12 20:04:20 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their has no weapon !" << std::endl; 
	else
		std::cout << this->_name << " attacks with their " << (this->_weapon)->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}