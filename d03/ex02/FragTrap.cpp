/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:04:32 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 17:33:24 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : Claptrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "Fragtrap " << _name << " has just been built !" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "Fragtrap " << _name << " has just been built !" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : Claptrap(src._name)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap " << _name << " has been destroy !" << std::endl;
	return ;
}

/*						OPERATOR						*/
FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return *this;
}

/*						FUNCTIONS						*/

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me an High Five dude pls !" << std::endl;
	return ;
}