/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:19 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 16:55:52 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(void)
{
	return ;
}

Claptrap::Claptrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "Claptrap " << this->getName() << " has just been built !" << std::endl;
	return ;
}

Claptrap::~Claptrap()
{
	std::cout << "Claptrap " << this->getName() << " has been destroy !" << std::endl;
	return ;
}

/*						FUNCTIONS						*/

void	Claptrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg() << " points of damage !" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << this->getName() << " don't have enought energy to attack !" << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	
}

void	Claptrap::beRepaired(unsigned int amount)
{
	
}

/*						ACCESSORS						*/

std::string	Claptrap::getName(void)
{
	return this->_name;	
}

int	Claptrap::getHitsPoints(void)
{
	return this->_hit_points;
}

int	Claptrap::getEnergyPoints(void)
{
	return this->_energy_points;
}

int	Claptrap::getAttackDmg(void)
{
	return this->_attack_dmg;
}