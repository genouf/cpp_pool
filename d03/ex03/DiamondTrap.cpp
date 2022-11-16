/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:55:18 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 19:23:55 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrapp::DiamondTrapp(void) : Claptrap("anonyme_clap_name"), ScavTrap("anonyme"), FragTrap("anonyme"), _name("anonyme")
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "Diamondtrap " << _name << " has just been built !" << std::endl;
	return ;
}

DiamondTrapp::DiamondTrapp(std::string name) : Claptrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "Diamondtrap " << _name << " has just been built !" << std::endl;
	return ;
}

DiamondTrapp::DiamondTrapp(DiamondTrapp const &src) : Claptrap(src._name + "_clap_name"), ScavTrap(src._name), FragTrap(src._name)
{
	*this = src;
	return ;
}

DiamondTrapp::~DiamondTrapp()
{
	std::cout << "Diamondtrap " << _name << " has been destroy !" << std::endl;
	return ;
}

/*						OPERATOR						*/
DiamondTrapp &	DiamondTrapp::operator=(DiamondTrapp const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return *this;
}

/*						FUNCTIONS						*/
void	DiamondTrapp::whoAmI(void)
{
	std::cout << "I am a DiamondTrap named " << this->_name << " and my ClapTrap name is " << this->Claptrap::_name << std::endl;
}