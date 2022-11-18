/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 08:35:34 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

/*						OPERATOR						*/
Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	Animal::makeSound(void) const
{
	std::cout << "  ...  " << std::endl;
	return ;
}

/*						OPERATOR						*/
std::string	Animal::getType(void) const
{
	return this->_type;
}