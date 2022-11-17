/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:27:48 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 15:25:23 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _type("Dog")
{
	return ;
}

Dog::Dog(Dog const &src) : Animal()
{
	*this = src;
	return ;
}

Dog::~Dog()
{
	return ;
}

/*						OPERATOR						*/
Dog &	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	Dog::makeSound(void) const
{
	std::cout << "wouaf wouhhhhhh wouaf wouaf !!" << std::endl;
	return ;
}