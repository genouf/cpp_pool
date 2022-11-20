/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:26:08 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 17:03:49 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria()
{
	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const &src) : AMateria(src._type)
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

/*						OPERATOR						*/
Ice &Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return *this;
}

/*						FUNCTIONS						*/
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}