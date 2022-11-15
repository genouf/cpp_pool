/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:51:58 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 12:36:10 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

/*						CONSTRUCTOR						*/

Fixed::Fixed(void) : _nbr(0)
{
	return ;
}

Fixed::Fixed(const int nb) : _nbr(nb << 8)
{
	return ;
}

Fixed::Fixed(const float nb)
{
	float tmp; 

	tmp = nb * 256.0f;
	tmp = roundf(tmp);
	this->_nbr = tmp;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}


/*						DESTRUCTOR						*/

Fixed::~Fixed()
{
	return ;
}


/*						OPERATOR						*/

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_nbr = rhs.getRawBits();
	return *this;
}

bool		Fixed::operator>(Fixed const & rhs) const
{
	return (this->_nbr > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const & rhs) const
{
	return (this->_nbr < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_nbr >= rhs.getRawBits());
}

bool		Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_nbr <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const & rhs) const
{
	return (this->_nbr <= rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_nbr <= rhs.getRawBits());
}

Fixed		Fixed::operator+(Fixed const & rhs)
{
	return Fixed(this->_nbr + rhs.getRawBits());
}

Fixed		Fixed::operator-(Fixed const & rhs)
{
	return Fixed(this->_nbr - rhs.getRawBits());
}

Fixed		Fixed::operator*(Fixed const & rhs)
{
	Fixed	result;
	
	result.setRawBits((this->_nbr * rhs.getRawBits()) / 256);
	return (result);
}

Fixed		Fixed::operator/(Fixed const & rhs)
{
	Fixed	result;
	
	result.setRawBits((this->_nbr / rhs.getRawBits()) * 256);
	return (result);
}

Fixed &		Fixed::operator++(void)
{
	this->_nbr++;
	return *this;
}

Fixed &		Fixed::operator--(void)
{
	this->_nbr--;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed	result(*this);

	this->_nbr++;
	return result;
}

Fixed		Fixed::operator--(int)
{
	Fixed	result(*this);

	this->_nbr--;
	return result;
}

const Fixed &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
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