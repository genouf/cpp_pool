/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:29:08 by genouf            #+#    #+#             */
/*   Updated: 2022/11/30 09:49:49 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "main.hpp"

void	hardcode_value(char *str)
{
	std::string str_s(str);
	
	if (str_s == "-inff" || str_s == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		exit(EXIT_SUCCESS);
	}
	else if (str_s == "+inff" || str_s == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		exit(EXIT_SUCCESS);
	}
	else if (str_s == "nanf" || str_s == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		exit(EXIT_SUCCESS);
	}
}

void	convert_char(char *str)
{
	char	tmp = str[0];
	
	if (type_char(str) == 2)
	{
		std::cout << "char: Non displayable" << std::endl;
		tmp -= 48;
	}
	else
		std::cout << "char: '" << tmp << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(tmp) << std::endl;
}

void	convert_int(char *str)
{
	long int	tmp;

	tmp = strtol(str, NULL, 10);
	if (tmp < std::numeric_limits<int>::min() || tmp > std::numeric_limits<int>::max())
	{
		std::cerr << "INT CONVERSION IMPOSSIBLE !" << std::endl;
		exit(EXIT_FAILURE);
	}
	if (tmp > std::numeric_limits<char>::max() || tmp < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (tmp < 32 || tmp > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(tmp) << std::endl;
}

void	convert_float(char *str)
{
	double	tmp;
	
	hardcode_value(str);
	tmp = strtof(str, NULL);
	if (tmp == std::numeric_limits<float>::infinity() || tmp == -std::numeric_limits<float>::infinity())
	{
		std::cerr << "FLOAT CONVERSION IMPOSSIBLE !" << std::endl;
		exit(EXIT_FAILURE);
	}
	if (tmp > std::numeric_limits<char>::max() || tmp < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (tmp < 32 || tmp > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	if (tmp < std::numeric_limits<int>::min() || tmp > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << tmp << std::endl;
}

void	convert_double(char *str)
{
	long double	tmp;

	hardcode_value(str);
	tmp = strtod(str, NULL);
	if (tmp == std::numeric_limits<double>::infinity() || tmp == -std::numeric_limits<double>::infinity())
	{
		std::cerr << "DOUBLE CONVERSION IMPOSSIBLE !" << std::endl;
		exit(EXIT_FAILURE);
	}
	if (tmp > std::numeric_limits<char>::max() || tmp < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (tmp < 32 || tmp > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	if (tmp < std::numeric_limits<int>::min() || tmp > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	if (tmp < std::numeric_limits<float>::min() || tmp > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(tmp) << std::endl;
}