/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:51:11 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:22:46 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:
	Cat(void);
	Cat(Cat const &src);
	Cat & operator=(Cat const & rhs);
	virtual ~Cat();

	void	makeSound(void) const;
	Brain	*getBrain(void);
	
private:
	Brain	*_brain;

};

#endif