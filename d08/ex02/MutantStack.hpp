/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:38:42 by genouf            #+#    #+#             */
/*   Updated: 2022/11/29 14:30:06 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) { return ; };
		MutantStack(MutantStack<T> const &src) : std::stack<T>(src) { return ; };
		~MutantStack() { return ; };
		MutantStack & operator=(MutantStack const &rhs) { (void)rhs; return *this; };
		
		typedef typename std::stack<T>::container_type::iterator it;
		it begin()
		{
			return (this->c.begin());
		}
		it end()
		{
			return (this->c.end());
		}

		it rbegin()
		{
			return (this->c.rbegin());
		}
		it rend()
		{
			return (this->c.rend());
		}

		typedef typename std::stack<T>::container_type::const_iterator c_it;

		c_it begin() const
		{
			return (this->c.begin());
		}
		c_it cend() const
		{
			return (this->c.end());
		}
		c_it crbegin() const
		{
			return (this->c.rbegin());
		}
		c_it crend() const
		{
			return (this->c.rend());
		}
};

