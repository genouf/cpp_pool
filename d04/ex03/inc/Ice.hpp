/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:30:49 by genouf            #+#    #+#             */
/*   Updated: 2022/11/19 19:27:27 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
	
public:
	Ice(void);
	Ice(Ice const &src);
	Ice & operator=(Ice const & rhs);
	virtual ~Ice();

	void use(ICharacter& target);
	virtual	AMateria* clone() const;

private:

};