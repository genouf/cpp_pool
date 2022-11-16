/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:04:30 by genouf            #+#    #+#             */
/*   Updated: 2022/11/16 18:16:57 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "Claptrap.hpp"

class FragTrap : virtual public Claptrap {

public:
	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string name);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
	
	void	highFivesGuys(void);
private:
	
};

#endif