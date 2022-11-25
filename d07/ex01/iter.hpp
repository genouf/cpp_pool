/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:18:40 by genouf            #+#    #+#             */
/*   Updated: 2022/11/25 16:50:53 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T *addr_tab, int size, void (*f)(T))
{
	for (int i = 0; i < size; i++)
		f(addr_tab[i]);
}

template <typename T>
void	printcpp(T element)
{
	std::cout << element << std::endl;
}