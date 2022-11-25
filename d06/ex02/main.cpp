/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:26:49 by genouf            #+#    #+#             */
/*   Updated: 2022/11/25 11:20:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate(void)
{
	int 	roll = (std::rand() % 3) + 1;

	switch (roll)
	{
	case 1:
		std::cout << "Base A created !" << std::endl;
		return (new A());
		break;
	case 2:
		std::cout << "Base B created !" << std::endl;
		return (new B());
		break;
	case 3:
		std::cout << "Base C created !" << std::endl;
		return (new C());
		break;
	default:
		return (NULL);
		break;
	}
}

void	identify(Base *p)
{
	try
	{
		A	&a = dynamic_cast<A &>(*p);
		(void)a;
		std::cout << "Type A detected !" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B	&b = dynamic_cast<B &>(*p);
			(void)b;
			std::cout << "Type B detected !" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C	&c = dynamic_cast<C &>(*p);
				(void)c;
				std::cout << "Type C detected !" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Type unknown !" << std::endl;
			}
		}
	}
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Type A detected !" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B	&b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Type B detected !" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C	&c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Type C detected !" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Type unknown !" << std::endl;
			}
		}
	}
}

int	main(void)
{
	std::srand(std::time(0));
	
	Base	*tmp = generate();
	identify(tmp);
	identify(*tmp);
	return (0);
}