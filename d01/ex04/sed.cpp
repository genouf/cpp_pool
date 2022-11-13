/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/13 17:08:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	sed_line(std::string line, std::string s1, std::string s2)
{
	std::size_t	pos;
	std::size_t	len_s1;

	len_s1 = s1.length();
	while (line.find(s1) != std::string::npos)
	{
		pos = line.find(s1);
		line.erase(pos, len_s1);
		line.insert(pos, s2);
	}
	return (line);
}

void	lets_sed(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
	std::string	line;

	while (std::getline(infile, line))
		outfile << sed_line(line, s1, s2) << std::endl;
	infile.close();
	outfile.close();
}