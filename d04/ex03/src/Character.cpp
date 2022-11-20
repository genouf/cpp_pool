/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:02:15 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 17:14:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

/*							MANDATORY						*/
Character::Character(void) : _name("anonyme")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_trash = NULL;
	_trash_size = 0;
	return ;
}

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_trash = NULL;
	_trash_size = 0;
	return ;
}

Character::Character(Character const &src)
{
	_name = src._name;
	_trash = NULL;
	_trash_size = 0;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] != NULL)
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
	for (int i = 0; i < _trash_size; i++)
	{
		delete _trash[i];
	}
	delete [] _trash;
	return ;
}

/*						OPERATOR					*/
Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
				delete _inventory[i];
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

/*						FUNCTIONS					*/
void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full !" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if ((idx > -1 && idx < 4) && _inventory[idx] == NULL)
		std::cout << "Wrong item !" << std::endl;
	else
	{
		use_trash(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
	else
		std::cout << "I don't have this item !" << std::endl;
}

void	Character::use_trash(AMateria *m)
{
	AMateria	**new_trash;

	_trash_size++;
	new_trash = new AMateria *[_trash_size];
	for (int i = 0; i < _trash_size - 1; i++)
		new_trash[i] = _trash[i];
	delete [] _trash;
	_trash = new_trash;
	_trash[_trash_size - 1] = m;
}

/*							ACCESSOR						*/
std::string	const &Character::getName(void) const
{
	return (_name);
}