/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:37 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:12:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal {

public:
	AAnimal(void);
	AAnimal(AAnimal const &src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal();

	virtual	void	makeSound(void) const = 0;
	std::string		getType(void) const;
	void			setType(std::string type);

protected:
	std::string	_type;

};