/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:14 by genouf            #+#    #+#             */
/*   Updated: 2022/11/30 15:53:47 by genouf           ###   ########.fr       */
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
	return (*this);
}

/*			FUNCTIONS			*/
void	Span::addNumber(int nb)
{
	if (this->_stock.size() >= this->_size_max)
		throw OutOfSpaceException();
	this->_stock.push_back(nb);
	return ;
}

void	Span::addNumber(std::vector<int> v)
{
	if (v.size() + this->_stock.size() > this->_size_max)
		throw OutOfSpaceException();
	this->_stock.insert(this->_stock.end(), v.begin(), v.end());
}

int		Span::shortestSpan(void) const
{
	std::vector<int>			v_tmp = this->_stock;
	std::vector<int>::iterator 	it;
	int							result;
	int							tmp;

	it = v_tmp.begin();
	if (v_tmp.size() < 2)
		throw ImpossibleRangeException();
	std::sort(v_tmp.begin(), v_tmp.end());
	result = abs(*it - *(it + 1));
	for (it = v_tmp.begin() + 1; it != v_tmp.end() - 2; it++)
	{
		tmp = abs(*it - *(it + 1));
		if (tmp < result)
			result = tmp;
	}
	return (result);
}

int		Span::longestSpan(void) const
{
	std::vector<int>			v_tmp = this->_stock;
	
	if (v_tmp.size() < 2)
		throw ImpossibleRangeException();
	std::sort(v_tmp.begin(), v_tmp.end());
	return (v_tmp.back() - v_tmp.front());
}

void	Span::print_span(void)
{
	std::vector<int>::iterator	it = this->_stock.begin();

	for (this->_stock.begin(); it != this->_stock.end(); it++)
		std::cout << *it << std::endl;
}

/*			EXCEPTIONS			*/
const char *Span::OutOfSpaceException::what(void) const throw()
{
	return ("Too much elements in span !");
}

const char *Span::ImpossibleRangeException::what(void) const throw()
{
	return ("Impossible to give a range because of the number of elements in span !");
}