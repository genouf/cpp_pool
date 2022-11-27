/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:07:01 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 13:22:53 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array 
{
	public:
		Array(void);
		Array(unsigned int size);
		Array(Array const &src);
		Array & operator=(Array const &rhs);
		virtual ~Array();
		
		T & operator[](unsigned int i);
		unsigned int	size(void) const;
		
	private:
		T				*_content;
		unsigned int	_size;

	class BadRangeException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	
};

#endif
