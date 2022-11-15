/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:52:00 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 12:06:51 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	/*						OPERATOR						*/
	Fixed &		operator=(Fixed const & rhs);
	bool		operator>(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;
	
	Fixed		operator+(Fixed const & rhs);
	Fixed		operator-(Fixed const & rhs);
	Fixed		operator*(Fixed const & rhs);
	Fixed		operator/(Fixed const & rhs);
	
	Fixed &		operator++(void);
	Fixed &		operator--(void);
	Fixed		operator++(int);
	Fixed		operator--(int);
	
	/*						FUNCTIONS						*/
	static	Fixed const & min(Fixed const &a, Fixed const &b);
	static	Fixed const & max(Fixed const &a, Fixed const &b);
	static	Fixed &	min(Fixed &a, Fixed &b);
	static	Fixed &	max(Fixed &a, Fixed &b);
	float	toFloat(void) const;
	int		toInt(void) const;
	/*						ACCESSOR						*/
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_nbr;
	static const int	_bits_tmp;

};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

#endif