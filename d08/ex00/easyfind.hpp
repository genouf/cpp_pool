/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:02:09 by genouf            #+#    #+#             */
/*   Updated: 2022/11/29 20:15:14 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int	easyfind(T &container, int nb)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw std::exception();
	return (*it);
}

#endif