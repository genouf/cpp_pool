/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:07:04 by genouf            #+#    #+#             */
/*   Updated: 2022/12/01 14:49:52 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"
#include <cstdlib>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main(void)
{
    std::cout << "--- Tests constructeur sans param ---" << std::endl;
    Array<int> array_noParams;
    std::cout << "--- Tests constructeur avec param ---" << std::endl;
    Array<int> numbers(10);
    for (int i = 0; i < 10;i++)
    {
        numbers[i] = rand();
    }
    std::cout << "--- Tests constructeur par copie ---" << std::endl;
    try
    {
        Array<int> test(numbers);
        std::cout << "-- before change --" << std::endl;
        std::cout <<"numbers[4] = " << numbers[4] << std::endl;
        std::cout <<"test[4] = " << test[4] << std::endl;
        std::cout << "-- after change --" << std::endl;
        numbers[4] = 54;
        std::cout <<"numbers[4] = " << numbers[4] << std::endl;
        std::cout <<"test[4] = " << test[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
    try
    {
        numbers[15] = 8;
    }
    catch(const std::exception& e)
    {
        std::cerr << std::endl << e.what() << std::endl << std::endl;
    }
    std::cout << "--- Tests size ---" << std::endl;
    try
    {
        Array<int> five(5);
        Array<int> two(2);
        Array<int> fortytwo(42);
        std::cout <<"five = " << five.size() << std::endl;
        std::cout <<"two = " << two.size() << std::endl;
        std::cout <<"fortytwo = " << fortytwo.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << std::endl <<  e.what() << std::endl << std::endl;
    }
}