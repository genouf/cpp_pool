/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:51:08 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 15:25:36 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _type("Cat")
{
	return ;
}

Cat::Cat(Cat const &src) : Animal()
{
	*this = src;
	return ;
}

Cat::~Cat()
{
	return ;
}

/*						OPERATOR						*/
Cat &	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

/*						FUNCTIONS						*/
void	Cat::makeSound(void) const
{
	std::cout << "miaou miaouuuuuuu miaou miaouuu !!" << std::endl;
	return ;
}