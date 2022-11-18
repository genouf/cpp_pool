/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:15:00 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

/*						OPERATOR						*/
AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	AAnimal::makeSound(void) const
{
	std::cout << "  ...  " << std::endl;
	return ;
}

/*						OPERATOR						*/
std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}