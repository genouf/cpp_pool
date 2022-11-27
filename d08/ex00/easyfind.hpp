/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:02:09 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 16:57:27 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
int	easyfind(T &container, int nb)
{
	typename T::iterator it;
	
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (*it == nb)
			return (nb);
	}
	throw std::exception();
}

#endif