/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:27:35 by genouf            #+#    #+#             */
/*   Updated: 2022/11/17 15:20:29 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog(void);
	Dog(Dog const &src);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog();

	void	makeSound(void) const;
	
protected:
	std::string	_type;

};

#endif