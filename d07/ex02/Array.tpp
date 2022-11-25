/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:27:50 by genouf            #+#    #+#             */
/*   Updated: 2022/11/25 18:50:14 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(void) : _content(0), _size(0) { return ; }

template <typename T>
Array<T>::Array(unsigned int size) : _content(new T[size]), _size(size) { return ; }

template <typename T>
Array<T>::Array(Array const &src) : _content(new T[src._size]), _size(src._size)
{
	for (int i = 0; i < this->_size; i++)
		this->_content = src._content[i];
	return ;
}

template <typename T>
Array<T>::~Array() { return ; }

#endif