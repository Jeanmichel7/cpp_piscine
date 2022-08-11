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
#include "Wronganimal.hpp"
#include "Wrongcat.hpp"

int main()
{
	std::cout  << std::endl << UND "Test Animaux" END << std::endl << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << "Type : " << j->getType() << " " << std::endl;
	std::cout << "Type : " << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;


	std::cout  << std::endl << UND "Test Wrong Animaux" END << std::endl << std::endl;

	const WrongAnimal *wrong_meta = new WrongAnimal();
	const WrongCat *wrong_cat = new WrongCat();
	
	std::cout << "Type : " << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_meta->makeSound();

	delete wrong_meta;
	delete wrong_cat;

	return 0;
}