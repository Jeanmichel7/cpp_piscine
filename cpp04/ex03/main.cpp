/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:09 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 07:44:35 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Characterinterface.hpp"
#include "Character.hpp"
#include "Materiasourceinterface.hpp"
#include "Materiasource.hpp"

int main()
{

	std::cout << std::endl
			  << "Test sujet" << std::endl
			  << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);



	std::cout << std::endl
			  << "Test approfondi" << std::endl
			  << std::endl;


	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("other");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);


	std::cout << std::endl
			  << "Equipment full" << std::endl
			  << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	


	std::cout << std::endl
			  << "Test unequip" << std::endl
			  << std::endl;
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl
			  << "Test max learn" << std::endl
			  << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());


	std::cout << std::endl
			  << "Test index overflow" << std::endl
			  << std::endl;
	me->unequip(20);



	delete bob;
	delete me;
	delete src;

	return 0;
}
