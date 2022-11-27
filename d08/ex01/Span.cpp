/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:14 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 21:45:16 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) { return ; }

Span::Span(unsigned int size_max) : _size_max(size_max) { return ; }

Span::Span(Span const &src) : _size_max(src._size_max), _stock(src._stock) { return ; }

Span::~Span() { return ; }

/*			OPERATORS			*/

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_size_max = rhs._size_max;
		this->_stock = rhs._stock;
	}
	return *this;
}

/*			FUNCTIONS			*/
void	Span::addNumber(int nb)
{
	this->_stock.push_back(nb);
	return ;
}

int		Span::shortestSpan(void) const
{
	std::vector<int>::iterator result;

	result = std::max_element(this->_stock.begin(), this->_stock.end());
}

int		Span::longestSpan(void) const
{
	
}