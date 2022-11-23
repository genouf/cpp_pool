/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:29:59 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 17:43:51 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern & operator=(Intern const & rhs);
		virtual ~Intern();

		Form	*makeForm(std::string const &name, std::string const &target);
		
	private:
		Form	*makeShrubberyCreationForm(std::string const &target);
		Form	*makeRobotomyRequestForm(std::string const &target);
		Form	*makePresidentialPardonForm(std::string const &target);
};

typedef	Form * (Intern::*intern_f)(std::string const &target);