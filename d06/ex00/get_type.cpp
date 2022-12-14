/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:31:44 by genouf            #+#    #+#             */
/*   Updated: 2022/12/01 11:25:44 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	type_char(char *str)
{
	if (str[0] != '\0' && str[1] == '\0')
	{
		if (ft_isdigit(str[0]) || (str[0] < 32 || str[0] > 126))
			return (2);
		return(1);
	}
	return (0);
}

int	type_int(char *str)
{
	char		*end;
	
	std::strtol(str, &end, 10);
	if (*end != '\0')
		return (0);
	return (1);
}

int	type_float(char *str)
{
	char		*end;
	std::string	str_s(str);

	if (str_s == "inf" || str_s == "inff" || str_s == "-nanf" || str_s == "-nan" || str_s == "+nanf" || str_s == "+nan")
		return (0);
	if (str_s == "-inff" || str_s == "+inff" || str_s == "nanf")
		return (1);
	strtod(str, &end);
	if (*end != '\0' && (*end == 'f' && str[1] == '\0'))
		return (0);
	if (str[str_s.size() - 1] != 'f')
		return (0);
	if (str_s == "-inf" || str_s == "+inf" || str_s == "nan")
		return (0);
	return (1);
}

int	type_double(char *str)
{
	char			*end;
	std::string	str_s(str);

	if (str_s == "inf" || str_s == "inff" || str_s == "-nanf" || str_s == "-nan" || str_s == "+nanf" || str_s == "+nan")
		return (0);
	if (str_s == "-inf" || str_s == "+inf" || str_s == "nan")
		return (1);
	strtold(str, &end);
	if (*end != '\0')
		return (0);
	if (str_s == "-inff" || str_s == "+inff" || str_s == "nanf")
		return (0);
	return (1);
}