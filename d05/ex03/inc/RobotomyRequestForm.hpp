/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:25 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 16:04:49 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
		virtual	~RobotomyRequestForm();
		
		virtual void	execute(Bureaucrat const & executor) const;

		std::string		getTarget(void);

	private:
		RobotomyRequestForm(void);
		std::string	_target;
};