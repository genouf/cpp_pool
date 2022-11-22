/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:45 by genouf            #+#    #+#             */
/*   Updated: 2022/11/22 13:51:07 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() { return ; }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = src._target;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() { return ; }

/*						OPERATORS						*/
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

/*						FUNCTIONS						*/
void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->check_exec(executor);
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/*						OPERATORS						*/
std::string		PresidentialPardonForm::getTarget(void)
{
	return this->_target;
}