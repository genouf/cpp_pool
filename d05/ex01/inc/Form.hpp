/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:10:57 by genouf            #+#    #+#             */
/*   Updated: 2022/11/21 18:48:22 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form 
{
	public:
		Form(std::string name, int g_sign, int g_exec);
		Form(Form const &src);
		Form & operator=(Form const &rhs);
		virtual	~Form();

		void	beSigned()

	private:
		Form(void);
		std::string	_name;
		bool		_signed;
		int			_g_sign;
		int			_g_exec;
	
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

std::ostream &		operator<<(std::ostream & o, Form const & i);
