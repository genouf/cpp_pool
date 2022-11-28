/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/28 22:02:16 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int size_max);
		Span(Span const &src);
		Span & operator=(Span const &rhs);
		virtual ~Span();

		void	addNumber(int nb);
		void	addNumber(std::vector<int> v);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		
	private:
		Span(void);
		unsigned int 		_size_max;
		std::vector<int>	_stock;

	class OutOfSpaceException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

	class ImpossibleRangeException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

};
