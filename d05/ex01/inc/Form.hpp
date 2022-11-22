/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:10:57 by genouf            #+#    #+#             */
/*   Updated: 2022/11/21 22:42:35 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	public:
		Form(std::string name, int g_sign, int g_exec);
		Form(Form const &src);
		Form & operator=(Form const &rhs);
		virtual	~Form();

		void	beSigned(Bureaucrat const &b);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		
	private:
		Form(void);
		const std::string	_name;
		bool				_signed;
		int					_g_sign;
		int					_g_exec;
	
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

		class AlreadySigned : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	
};

std::ostream &		operator<<(std::ostream & o, Form const & i);
