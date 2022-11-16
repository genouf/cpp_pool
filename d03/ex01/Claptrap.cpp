/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:19 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 10:45:59 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(void) : _name("anonyme"), _hit_points(100), _energy_points(50), _attack_dmg(20)
{
	std::cout << "Claptrap " << _name << " has just been built !" << std::endl;
	return ;
}

Claptrap::Claptrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "Claptrap " << _name << " has just been built !" << std::endl;
	return ;
}

Claptrap::Claptrap(Claptrap const & src)
{
	*this = src;
	return ;
}

Claptrap::~Claptrap()
{
	std::cout << "Claptrap " << _name << " has been destroy !" << std::endl;
	return ;
}

/*						OPERATOR						*/
Claptrap &	Claptrap::operator=(Claptrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return *this;
}

/*						FUNCTIONS						*/

void	Claptrap::attack(const std::string &target)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage !" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << _name << " don't have enought energy to attack !" << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	unsigned int	taken_dmg;

	if (amount >= (unsigned int)_hit_points)
		taken_dmg = _hit_points;
	else
		taken_dmg = amount;
	_hit_points -= taken_dmg;
	std::cout << "ClapTrap " << _name << " has taken " << taken_dmg << " ! ==> " << _hit_points << " left." << std::endl; 
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " has repair " << amount << " life points ! ==> " << _hit_points << " left." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " don't have enought energy to repair !" << std::endl;
}