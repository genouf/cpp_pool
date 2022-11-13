/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/13 23:14:56 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

std::string	sed_line(std::string line, std::string s1, std::string s2)
{
	std::size_t	actual_pos;
	std::size_t	pos;

	actual_pos = 0;
	while (line.find(s1, actual_pos) != std::string::npos)
	{
		pos = line.find(s1, actual_pos);
		actual_pos = pos + s2.size();
		line.erase(pos, s1.size());
		line.insert(pos, s2);
	}
	return (line);
}

void	lets_sed(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
	std::stringstream	buffer;

	buffer << infile.rdbuf();
	outfile << sed_line(buffer.str(), s1, s2) << std::endl;
	infile.close();
	outfile.close();
}