/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:32 by genouf            #+#    #+#             */
/*   Updated: 2022/11/22 17:01:19 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
		virtual	~PresidentialPardonForm();
		
		virtual void	execute(Bureaucrat const & executor) const;

		std::string		getTarget(void);

	private:
		PresidentialPardonForm(void);
		std::string	_target;
};