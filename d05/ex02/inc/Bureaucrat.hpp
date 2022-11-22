/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:44 by genouf            #+#    #+#             */
/*   Updated: 2022/11/21 22:42:43 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		virtual ~Bureaucrat();
		
		void	upGrade(void);
		void	downGrade(void);
		void	signForm(Form &f);

		std::string	getName(void) const;
		int			getGrade(void) const;

	private:
		Bureaucrat(void);
		const std::string	_name;
		int					_grade;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	
};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & i);
