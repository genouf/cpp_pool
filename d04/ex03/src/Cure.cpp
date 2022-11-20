/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 11:37:28 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria()
{
	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src._type)
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

/*						OPERATOR						*/
Cure &Cure::operator=(Cure const &rhs)
{
	return *this;
}

/*						FUNCTIONS						*/
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}