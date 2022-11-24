/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:16:24 by genouf            #+#    #+#             */
/*   Updated: 2022/11/24 16:30:48 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <iostream>
#include <cstdlib>
#include <string>

/*			GET_TYPE			*/
int		type_char(char *str);
int		type_int(char *str);
int		type_float(char *str);
int		type_double(char *str);

/*			CONVERT_TYPE			*/
void	convert_char(char *str);
void	convert_int(char *str);
void	convert_float(char *str);
void	convert_double(char *str);

#endif