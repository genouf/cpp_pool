/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:51:58 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 08:24:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*						CONSTRUCTOR						*/

Fixed::Fixed(void) : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*						DESTRUCTOR						*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*						OPERATOR						*/

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nbr = rhs.getRawBits();
	return *this;
}

/*						FUNCTIONS						*/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _nbr;
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
	return ;
}

/*						STATIC						*/

const int Fixed::_bits_tmp = 8;