/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 15:15:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	return ;
}

Animal::~Animal()
{
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

/*						ACCESSORS						*/
std::string	Animal::getType(void) const
{
	return this->_type;
}