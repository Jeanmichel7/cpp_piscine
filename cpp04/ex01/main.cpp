/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:24 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:11:02 by jrasser          ###   ########.fr       */
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

/*
int main()
{
	

	return 0;
}
*/


int main()
{
/*
	Dog basic;
	{
		Dog tmp = basic;
	}
*/

/*
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;
*/


	std::cout  << std::endl << UND "Construct Animals" END << std::endl << std::endl;
	Animal *tab[100];

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
		std::cout << "Animal " << i << " (" << tab[i]->getType() << "), idea[0] : "
		<< tab[i]->AGetBrain()->getIdea1()
		<< std::endl;
	}


	std::cout << std::endl << UND "Destroy Animals" END << std::endl << std::endl;
	for(int i =0; i < 100; i++)
		delete tab[i];



	return 0;
}
