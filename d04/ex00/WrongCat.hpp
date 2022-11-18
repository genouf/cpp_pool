/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:46:14 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 09:11:33 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(WrongCat const &src);
	WrongCat & operator=(WrongCat const & rhs);
	virtual ~WrongCat();

	void			makeSound(void) const;

};

#endif