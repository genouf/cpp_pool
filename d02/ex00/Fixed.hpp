/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:52:00 by genouf            #+#    #+#             */
/*   Updated: 2022/11/14 15:54:47 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed();

	/*						OPERATOR						*/
	Fixed &		operator=(Fixed const & rhs);

	/*						FUNCTIONS						*/
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_nbr;
	static const int	_bits_tmp;

};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

#endif