/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:27:48 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 08:36:39 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	return ;
}

Dog::Dog(Dog const &src) : Animal()
{
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

/*						OPERATOR						*/
Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	Dog::makeSound(void) const
{
	std::cout << "wouaf wouhhhhhh wouaf wouaf !!" << std::endl;
	return ;
}