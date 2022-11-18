/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:27:48 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:24:09 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src) : AAnimal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

/*						OPERATOR						*/
Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	return *this;
}

/*						FUNCTIONS						*/
void	Dog::makeSound(void) const
{
	std::cout << "wouaf wouhhhhhh wouaf wouaf !!" << std::endl;
	return ;
}

/*							ACCESSORS						*/
Brain	*Dog::getBrain(void)
{
	return _brain;
}