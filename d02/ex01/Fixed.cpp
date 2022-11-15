/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:51:58 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 14:01:54 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

/*						CONSTRUCTOR						*/

Fixed::Fixed(void) : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nb) : _nbr(nb << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float nb)
{
	float tmp; 

	std::cout << "Float constructor called" << std::endl;
	tmp = nb * 256.0f;
	tmp = roundf(tmp);
	this->_nbr = tmp;
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

std::ostream &		operator<<(std::ostream & o, Fixed const & i)
{
	std::cout << i.toFloat();
	return o;
}

/*						ACCESSOR						*/

int	Fixed::getRawBits(void) const
{
	return _nbr;
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
	return ;
}

/*						FUNCTIONS						*/
float	Fixed::toFloat(void) const
{
	float	result;

	result = this->_nbr / 256.0f;
	return (result);
}

int		Fixed::toInt(void) const
{
	return (this->_nbr >> 8);
}

/*						STATIC						*/

const int Fixed::_bits_tmp = 8;