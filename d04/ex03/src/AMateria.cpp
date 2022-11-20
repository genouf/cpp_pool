/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:21:56 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 16:54:21 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return;
}

AMateria::~AMateria(void)
{
	return ;
}

/*						OPERATOR						*/

AMateria &AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return *this;
}

/*						FUNCTIONS						*/
std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	return ;
}