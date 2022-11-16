/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:55:21 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 18:53:00 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrapp : public ScavTrap, public FragTrap {

public:
	DiamondTrapp(void);
	DiamondTrapp(DiamondTrapp const &src);
	DiamondTrapp(std::string name);
	DiamondTrapp &	operator=(DiamondTrapp const & rhs);
	~DiamondTrapp();

	void	whoAmI(void);
	using	ScavTrap::attack;
private:
	std::string	_name;

};

#endif