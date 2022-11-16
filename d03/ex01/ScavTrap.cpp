/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:15:48 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 11:03:13 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : Claptrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "Scavtrap " << _name << " has just been built !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "Scavtrap " << _name << " has just been built !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : Claptrap(src._name)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << _name << " has been destroy !" << std::endl;
	return ;
}

/*						OPERATOR						*/
ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return *this;
}

/*						FUNCTIONS						*/

void	ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap is in Gate keeper mode !" << std::endl;
	return ;
}