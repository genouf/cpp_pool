/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:13 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 21:42:44 by genouf           ###   ########.fr       */
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
		int		shortestSpan(void) const;
		int		longtestSpan(void) const;
		
	private:
		Span(void);
		
		unsigned int 		_size_max;
		std::vector<int>	_stock;
};
