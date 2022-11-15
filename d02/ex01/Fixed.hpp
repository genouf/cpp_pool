/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:52:00 by genouf            #+#    #+#             */
/*   Updated: 2022/11/15 09:07:30 by genouf           ###   ########.fr       */
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

	/*						FUNCTIONS						*/
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