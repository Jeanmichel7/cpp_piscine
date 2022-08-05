/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:24 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/05 19:58:12 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\e[0;34m"
#define GRN "\e[0;32m"
#define RED "\e[0;31m"
#define END "\e[0m"
#define UND "\e[4m"

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
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
		std::cout << "Animal's idea " << i << " ( " << tab[i]->getType() << " ) : "
		<< tab[i]->AGetBrain()->getIdea1()
		<< std::endl;
	}


	std::cout << std::endl << UND "Destroy Animals" END << std::endl << std::endl;
	for(int i =0; i < 100; i++)
		delete tab[i];


	return 0;
}