/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:03:16 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 09:06:29 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

/*						OPERATOR						*/
WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	WrongAnimal::makeSound(void) const
{
	std::cout << "  ...  " << std::endl;
	return ;
}

/*						OPERATOR						*/
std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}