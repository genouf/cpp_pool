/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:47 by genouf            #+#    #+#             */
/*   Updated: 2022/11/23 17:47:55 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Bureaucrat				didier = Bureaucrat("Didier", 5);
	PresidentialPardonForm	pre_form = PresidentialPardonForm("Maurice");
	ShrubberyCreationForm	home = ShrubberyCreationForm("home");
	Intern					stagiaire;
	Form					*robo;

	/*			INTERN			*/
	std::cout << "====== INTERN ======" << std::endl;
	robo = stagiaire.makeForm("escape request", "partir");
	robo = stagiaire.makeForm("robotomy request", "stagiaire");

	/*			MANDATORY			*/
	std::cout << "====== MANDATORY ======" << std::endl;
	didier.signForm(pre_form);
	didier.signForm(*robo);
	didier.signForm(home);
	didier.executeForm(pre_form);
	didier.executeForm(*robo);
	didier.executeForm(home);

	/*			GRADE PROB			*/
	{
		std::cout << "====== GRADE PROB ======" << std::endl;
		Bureaucrat				john = Bureaucrat("John", 140);
		ShrubberyCreationForm	home = ShrubberyCreationForm("home");
		
		john.signForm(home);
		john.executeForm(home);
	}

	/*			NOT SIGNED			*/
	{
		std::cout << "====== NOT SIGNED ======" << std::endl;
		Bureaucrat				john = Bureaucrat("John", 40);
		RobotomyRequestForm		robo = RobotomyRequestForm("Robo");
		
		john.executeForm(robo);
	}

	return (0);
}