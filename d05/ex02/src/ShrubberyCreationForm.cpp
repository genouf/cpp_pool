/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:50 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 15:36:14 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() { return ; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 37), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 37)
{
	this->_target = src._target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { return ; }

/*						OPERATORS						*/
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

/*						FUNCTIONS						*/
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream outfile;

	this->check_exec(executor);
	outfile.open((this->_target + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw ShrubberyCreationForm::CantOpenFile();
	outfile << "                 __/\\__" << std::endl;
	outfile << "                 \\ ** /" << std::endl;
	outfile << "                 /_**_\\" << std::endl;
	outfile << "                 / \\/ \\" << std::endl;
	outfile << "               // ^  $ \\" << std::endl;
	outfile << "             /____________\\" << std::endl;
	outfile << "            //  *  %    \\\\^" << std::endl;
	outfile << "          ^/ /  @   +  #  \\ \\" << std::endl;
	outfile << "         /__/______________\\__\\^" << std::endl;
	outfile << "        * /  /   +        \\  \\ *" << std::endl;
	outfile << "       /%  /$ M E R R Y * \\ # \\" << std::endl;
	outfile << "     ^/____/____o___________\\____\\" << std::endl;
	outfile << "     * /  ^/            @  \\    \\ *" << std::endl;
	outfile << "     / %  /C H R I S T M A S\\   # \\" << std::endl;
	outfile << "  o/^    /o          #   %   \\o    ^\\" << std::endl;
	outfile << "/_____/_______________________\\______\\" << std::endl;
	outfile << "*   o   *    o   | * |  o   *    o   *" << std::endl;
	outfile << "                 |   |" << std::endl;
	outfile << "                 |___|" << std::endl;
}

/*						OPERATORS						*/
std::string		ShrubberyCreationForm::getTarget(void)
{
	return this->_target;
}

/*						EXCEPTIONS						*/
const char *ShrubberyCreationForm::CantOpenFile::what(void) const throw()
{
	return ("Can't open this file !");
}