/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:08:39 by genouf            #+#    #+#             */
/*   Updated: 2022/11/18 18:09:00 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*tab[10];
	Dog		medor;
	Dog		oscar;
	Cat		minou;
	
	/*		TEST TAB	*/
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete tab[i];

	/*		TEST COPIE PROFONDE 	*/
	medor.getBrain()->add_idea("je veux mon os");
	medor.getBrain()->add_idea("mon maitre c'est le meilleur");
	oscar.getBrain()->add_idea("mon maitre est nul");
	minou.getBrain()->add_idea("vive le pate");
	oscar = medor;
	oscar.getBrain()->add_idea("allez les bleus");
	medor.getBrain()->print_ideas();
	oscar.getBrain()->print_ideas();
	minou.getBrain()->print_ideas();
	Cat	*ouaf = new Cat(minou);
	ouaf->getBrain()->print_ideas();
	ouaf->getBrain()->add_idea("lolmdrxd");
	ouaf->getBrain()->print_ideas();
	medor.getBrain()->print_ideas();
	delete ouaf;
	return (0);	
}