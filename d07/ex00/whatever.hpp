/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:20:36 by genouf            #+#    #+#             */
/*   Updated: 2022/11/25 16:06:39 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &	min(T const &a, T const &b)
{
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T const &	max(T const &a, T const &b)
{
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	else
		return (b);
}