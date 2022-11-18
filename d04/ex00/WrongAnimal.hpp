/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:03:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 09:08:12 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	virtual ~WrongAnimal();

	void	makeSound(void) const;
	std::string		getType(void) const;
	
protected:
	std::string	_type;

};

#endif