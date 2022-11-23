/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:47 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 16:05:04 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() { return ; }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = src._target;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() { return ; }

/*						OPERATORS						*/
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

/*						FUNCTIONS						*/
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->check_exec(executor);
	int roll = (std::rand() % 2) + 1;
	if (roll == 1)
		std::cout << "...... Robotomy failed !" << std::endl;
	else
		std::cout << "briiiiiz zuuuu... " << this->_target << " has been robotomized !" << std::endl;
}

/*						OPERATORS						*/
std::string		RobotomyRequestForm::getTarget(void)
{
	return this->_target;
}