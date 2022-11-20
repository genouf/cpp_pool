/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:15:36 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 17:08:30 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_book[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._book[i] != NULL)
			_book[i] = src._book[i]->clone();
		else
			_book[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_book[i] != NULL)
			delete _book[i];
	}
	return ;
}

/*						OPERATOR						*/
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._book[i] != NULL)
			{
				delete _book[i];
				_book[i] = rhs._book[i]->clone();
			}
			else
				_book[i] = NULL;
		}
	}
	return *this;
}

/*						FUNCTIONS						*/
void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_book[i] == NULL)
		{
			_book[i] = m;
			return ;	
		}
	}
	delete m;
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_book[i] != NULL && _book[i]->getType() == type)
			return (_book[i]->clone()); 
	}
	return (NULL);
}