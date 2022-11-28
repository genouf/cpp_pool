/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:38:42 by genouf            #+#    #+#             */
/*   Updated: 2022/11/28 21:59:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(MutantStack<T> const &src) {};
		~MutantStack() {};
		MutantStack & operator=(MutantStack const &rhs) { return *this; };
		
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

		c_it cbegin()
		{
			return (this->c.cbegin());
		}
		c_it cend()
		{
			return (this->c.cend());
		}
		c_it crbegin()
		{
			return (this->c.crbegin());
		}
		c_it crend()
		{
			return (this->c.crend());
		}
};

