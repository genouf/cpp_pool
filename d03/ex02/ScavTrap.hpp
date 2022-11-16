/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:15:52 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 19:36:33 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public Claptrap {

public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	ScavTrap &	operator=(ScavTrap const & rhs);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate(void);
private:

};

#endif