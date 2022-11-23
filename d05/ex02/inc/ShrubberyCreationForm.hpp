/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:29 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 13:19:38 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
		virtual	~ShrubberyCreationForm();
		
		virtual void	execute(Bureaucrat const & executor) const;

		std::string		getTarget(void);

	private:
		ShrubberyCreationForm(void);
		std::string	_target;

	class CantOpenFile : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	
};