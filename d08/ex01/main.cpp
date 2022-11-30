/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:10 by genouf            #+#    #+#             */
/*   Updated: 2022/11/30 16:18:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		Span	test(7);
		Span	test2(2);



		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test2.addNumber(1);
		test2.addNumber(2);
		test = test2;
		std::cout << "=== test ===" << std::endl;
		test.print_span();
		std::cout << "=== test2 ===" << std::endl;
		test.print_span();
	}
	{
		Span test(4);
		
		std::cout << "====== TOO MUCH NUMBER ======" << std::endl;
		try
		{
			test.addNumber(2);
			test.print_span();
			std::cout << "======" << std::endl;
			test.addNumber(3);
			test.print_span();
			std::cout << "======" << std::endl;
			test.addNumber(4);
			test.print_span();
			std::cout << "======" << std::endl;
			test.addNumber(5);
			test.print_span();
			std::cout << "======" << std::endl;
			test.addNumber(6);
			test.print_span();
			std::cout << "======" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span test(4);

		std::cout << "====== BAD SHORTRANGE TEST ======" << std::endl;
		test.addNumber(1);
		try
		{
			std::cout << "SHORTRANGE " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span test(6);

		std::cout << "====== SHORTRANGE AND LONGRANGE TEST ======" << std::endl;
		test.addNumber(24);
		test.addNumber(10);
		test.addNumber(7);
		test.addNumber(2);
		test.addNumber(0);
		try
		{
			std::cout << "SHORTRANGE " << test.shortestSpan() << std::endl;
			std::cout << "LONGRANGE " << test.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span test(4000);
		std::vector<int>	v;
		int	arr[]= {2, 23, 87, 534, 12};
		
		test.addNumber(1);
		std::cout << "====== ADDRANGE TEST ======" << std::endl;
		v.insert(v.end(), arr, arr + 5);
		test.print_span();
		std::cout << "======" << std::endl;
		test.addNumber(v);
		test.print_span();
		std::cout << "======" << std::endl;
	}
	return (0);
}