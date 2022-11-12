/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:16:15 by genouf            #+#    #+#             */
/*   Updated: 2022/11/12 19:07:50 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	/*						FUNCTIONS						*/
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	
private:
	std::string	_name;
	Weapon		*_weapon;

};

#endif