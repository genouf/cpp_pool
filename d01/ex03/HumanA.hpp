/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:16:10 by genouf            #+#    #+#             */
/*   Updated: 2022/11/12 19:52:15 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	/*						FUNCTIONS						*/
	void	attack(void);

private:
	std::string	_name;
	Weapon		&_weapon;
	
};

#endif