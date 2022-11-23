/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:29:48 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 17:44:05 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) { return ; }

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern() { return ; }

/*						OPERATORS						*/

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

/*						FUNCTIONS						*/
Form	*Intern::makeShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	const std::string	tab_str[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	const intern_f		tab_f[] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == tab_str[i])
		{
			std::cout << "Intern creates a " << name << " !" << std::endl;
			return ((this->*(tab_f[i]))(target));
		}
	}
	std::cout << "Intern cannot create " << name << std::endl;
	return (NULL);
}