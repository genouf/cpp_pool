/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:10 by genouf            #+#    #+#             */
/*   Updated: 2022/11/27 21:11:32 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	test(7);
	Span	test2(2);

	test.addNumber(2);
	test.addNumber(3);
	test.addNumber(4);
	test2.addNumber(1);
	test2.addNumber(2);
	test2.addNumber(8);
	test = test2;
	return (0);
}