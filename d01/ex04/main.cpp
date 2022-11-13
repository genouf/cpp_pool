/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:59:50 by genouf            #+#    #+#             */
/*   Updated: 2022/11/13 16:45:06 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	manage_argv(std::ifstream *infile, std::ofstream *outfile, std::string *s1, std::string *s2 , char **argv)
{
	std::string	tmp;

	(*infile).open(argv[1]);
	tmp.append(argv[1]);
	tmp.append(".replace");
	(*outfile).open(tmp.c_str(), std::ios::out | std::ios::trunc);
	(*s1).append(argv[2]);
	(*s2).append(argv[3]);
}

int	handle_errors(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "One of the arguments is empty !" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;

	if (handle_errors(argc, argv))
		return (1);
	manage_argv(&infile, &outfile, &s1, &s2, argv);
	if (infile.is_open() && outfile.is_open())
		lets_sed(infile, outfile, s1, s2);
	else
	{
		std::cout << "Unable to open file !" << std::endl;
		return (1);
	}
	return (0);
}