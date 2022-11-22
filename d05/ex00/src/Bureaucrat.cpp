/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:41 by genouf            #+#    #+#             */
/*   Updated: 2022/11/21 21:53:17 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("anonyme"), _grade(150) { return ; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << this->_name << " constructed !" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " destructed !" << std::endl;
	return ; 
}

/*						OPERATORS						*/
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

/*						FUNCTIONS						*/
void	Bureaucrat::upGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

/*						ACCESSORS						*/
std::string	Bureaucrat::getName(void) const
{
	return this->_name;	
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

/*						EXCEPTIONS						*/
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("This Grade is too high !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("This Grade is too low !");
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & i)
{
	std::cout << i.getName() << " , bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}