/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:57:54 by genouf            #+#    #+#             */
/*   Updated: 2022/11/11 20:20:28 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie();

	/*						ACCESSOR						*/
	void	setName(std::string name);
	/*						FUNCTIONS						*/
	void	announce(void);
	
private:
	std::string _name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif