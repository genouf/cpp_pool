/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:10:59 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 16:18:28 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Unknown"), _signed(0), _g_sign(150), _g_exec(150)
{
	return ; 
}

Form::Form(std::string name, int g_sign, int g_exec) : _name(name), _signed(0), _g_sign(g_sign), _g_exec(g_exec)
{
	if (g_sign < 1 || g_exec < 1)
		throw Form::GradeTooHighException();
	else if (g_exec > 150 || g_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << this->_name << " constructed !" << std::endl;
}

Form::Form(Form const &src) : _name(src._name), _signed(0), _g_sign(src._g_sign), _g_exec(src._g_exec)
{
	return ;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destructed !" << std::endl;
	return ; 
}

/*						OPERATORS						*/
Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_g_sign = rhs._g_sign;
		this->_g_exec = rhs._g_exec;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Form const & i)
{
	std::cout << std::endl << "====== " << i.getName() << " FORM =======" << std::endl;
	std::cout << "Signed : " << i.getSigned() << std::endl;
	std::cout << "Grade to sign it : " << i.getGradeSign() << std::endl;
	std::cout << "Grade to exec it : " << i.getGradeExec() << std::endl << std::endl;
	return o;
}

/*						FUNCTIONS						*/
void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_g_sign)
		throw Form::GradeTooLowException();
	else if (this->_signed == 1)
		throw Form::AlreadySigned();
	else
		this->_signed = 1;
	return ;
}

void	Form::check_exec(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_g_exec)
		throw Form::CantBeExecutedTooLow();
	else if (this->_signed == 0)
		throw Form::CantBeExecutedNotSigned();
}

/*						ACCESSORS						*/
const std::string	Form::getName(void) const
{
	return this->_name;
}

bool	Form::getSigned(void) const
{
	return this->_signed;
}

int		Form::getGradeSign(void) const
{
	return this->_g_sign;
}

int		Form::getGradeExec(void) const
{
	return this->_g_exec;
}

/*						EXCEPTIONS						*/
const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("This Grade is too high !");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("This Grade is too low !");
}

const char *Form::AlreadySigned::what(void) const throw()
{
	return ("This Form is already signed !");
}

const char *Form::CantBeExecutedTooLow::what(void) const throw()
{
	return ("This Form cant be signed because the grade of the executor is too low !");
}

const char *Form::CantBeExecutedNotSigned::what(void) const throw()
{
	return ("This Form cant be signed because the form is not signed !");
}