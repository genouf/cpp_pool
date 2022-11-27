/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:27:50 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 13:22:42 by genouf           ###   ########.fr       */
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
	for (unsigned int i = 0; i < this->_size; i++)
		this->_content[i] = src._content[i];
	return ;
}

template <typename T>
Array<T>::~Array() 
{
	delete [] _content;
	return ; 
}

/*			OPERATORS			*/
template <typename T>
Array<T> &	Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		delete [] _content;
		_content = new T[rhs._size];
		_size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			this->_content[i] = rhs._content[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw BadRangeException();
	return (this->_content[i]);
}

/*			FUNCTIONS			*/
template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

/*			EXCEPTIONS			*/
template <typename T>
const char *Array<T>::BadRangeException::what(void) const throw()
{
	return ("This index is too high !");
}


#endif