/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:33:54 by genouf            #+#    #+#             */
/*   Updated: 2022/11/19 19:18:42 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

public:
	AMateria(void);
	AMateria(AMateria const &src);
	AMateria(std::string const & type);
	AMateria & operator=(AMateria const & rhs);
	virtual ~AMateria();

	std::string const & getType() const;

	virtual	AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
protected:
	std::string	_type;

};