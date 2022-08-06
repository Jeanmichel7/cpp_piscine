/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:09 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 14:10:50 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define GRN "\033[0;32m"
#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\e[4m"

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
			  << UND "Test sujet" END << std::endl
			  << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("Me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("Bob");
	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << std::endl
			  << UND "Test approfondi" END << std::endl
			  << std::endl;


	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("other");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);


	std::cout << std::endl
			  << UND "Equipment full" END << std::endl
			  << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	

	std::cout << std::endl
			  << UND "Test unequip" END << std::endl
			  << std::endl;
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(1);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	
	std::cout << std::endl
			  << UND "Test max learn" END << std::endl
			  << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());


	std::cout << std::endl
			  << UND "Test index overflow" END << std::endl
			  << std::endl;
	me->unequip(20);


	std::cout << std::endl
			  << UND "Test equipe Bob" END << std::endl
			  << std::endl;
	IMateriaSource *src_bob = new MateriaSource();
	src_bob->learnMateria(new Ice());

	AMateria *bob_materias;

	bob_materias = src_bob->createMateria("ice");
	bob->equip(bob_materias);
	bob->use(0, *me);



	delete bob;
	delete me;
	delete src;
	delete src_bob;

	return 0;
}
