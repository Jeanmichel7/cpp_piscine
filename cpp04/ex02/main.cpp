/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:24 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:19:17 by jrasser          ###   ########.fr       */
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
	/* BAD INSTANCE BECAUSE ABSTRACT CLASS */
	// Animal *ko_test = new Animal();

	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; // should not create a leak
	delete i;

	return 0;
}
