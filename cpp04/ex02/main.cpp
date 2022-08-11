/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:24 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 14:31:48 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define GRN "\033[0;32m"
#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\033[4m"

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout  << std::endl << UND "Construct Animals" END << std::endl << std::endl;
	Animal *tab[100];
	
	/* BAD INSTANCE BECAUSE ABSTRACT CLASS */
	// Animal *ko_test = new Animal();

	for(int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}


	std::cout << std::endl << UND "Get Ideas's Animals" END << std::endl << std::endl;
	for(int i = 0; i < 100; i++)
	{
		std::cout << "Animal's idea " << i << " ( " << tab[i]->getType() << " ) : "
		<< tab[i]->AGetBrain()->getIdea1()
		<< std::endl;
	}


	std::cout << std::endl << UND "Destroy Animals" END << std::endl << std::endl;
	for(int i =0; i < 100; i++)
		delete tab[i];



	return 0;
}