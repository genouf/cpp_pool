/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:53:42 by genouf            #+#    #+#             */
/*   Updated: 2022/11/19 19:24:29 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	
public:
	Cure(void);
	Cure(Cure const &src);
	Cure & operator=(Cure const & rhs);
	virtual ~Cure();

	void 		use(ICharacter& target);
	virtual	AMateria* clone() const;

private:

};