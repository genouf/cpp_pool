/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:53:08 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 16:39:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

public:
	Brain(void);
	Brain(Brain const &src);
	Brain & operator=(Brain const & rhs);
	virtual ~Brain();

	void	add_idea(std::string idea);
	void	print_ideas(void) const;

private:
	std::string	_ideas[100];

};

#endif