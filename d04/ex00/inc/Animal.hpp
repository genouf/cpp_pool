/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:37 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 16:17:04 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public:
	Animal(void);
	Animal(Animal const &src);
	Animal & operator=(Animal const & rhs);
	virtual ~Animal();

	virtual	void	makeSound(void) const;
	std::string		getType(void) const;
	
protected:
	std::string	_type;

};

#endif