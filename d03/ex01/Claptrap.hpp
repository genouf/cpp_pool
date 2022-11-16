/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:17 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 10:43:52 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class Claptrap {

public :
	Claptrap(void);
	Claptrap(std::string name);
	Claptrap(Claptrap const &src);
	~Claptrap();
	Claptrap &	operator=(Claptrap const & rhs);

	/*						FUNCTIONS						*/
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
protected :
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_dmg;
	
};

#endif