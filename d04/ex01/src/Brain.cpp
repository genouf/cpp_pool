/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:53:25 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:25:34 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	return ;
}

Brain::~Brain()
{
	return ;
}

/*							OPERATOR							*/
Brain & Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/*						FUNCTIONS								*/
void	Brain::add_idea(std::string idea)
{
	int	i;

	i = 0;
	while (!_ideas[i].empty())
		i++;
	if (i < 99)
		_ideas[i] = idea;
}

void	Brain::print_ideas(void) const
{
	int	i;
	
	i = 0;
	std::cout << "MY IDEAS : " << std::endl;
	while (!_ideas[i].empty())
	{
		std::cout << _ideas[i] << std::endl;
		i++;
	}
}