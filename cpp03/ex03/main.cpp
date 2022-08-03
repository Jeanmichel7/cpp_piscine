/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:21:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 20:02:55 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#define UNDER "\e[4m"
#define END	"\e[0m"

int	main(void)
{
	ClapTrap ingenior("The ingenior");

	DiamondTrap robot("The diamond robot");
	robot.whoAmI();

	/*
	std::cout << UNDER "------ SCAVTRAP (David)------" END << std::endl;

	std::cout << UNDER "Test constructor standard" END << std::endl;
	ScavTrap	david("David");
	std::cout << "name	- " << david.getName() << std::endl << std::endl;

	std::cout << UNDER "Test constructor de copie" END << std::endl;
	ScavTrap david_copie = david;
	std::cout << "scav_copie name	- "
	<< david_copie.getName() << std::endl << std::endl;

	std::cout << UNDER "Test operateur d'affectation =" END << std::endl;
	std::cout << UNDER "New class" END << std::endl;
	ScavTrap david_affectation("other David");
	std::cout << "before david_affectation name '"
	<< david_affectation.getName() << "'" << std::endl;

	std::cout << UNDER "Affectation class" END << std::endl;
	david_affectation = david;
	std::cout << "after scave_affectation name '"
	<< david_affectation.getName() << "'" << std::endl << std::endl << std::endl;



	std::cout << UNDER "------ FRAGTRAP (Goliath)------" END << std::endl;

	std::cout << UNDER "Test constructor standard" END << std::endl;
	FragTrap	goliath("Goliath");
	std::cout << "name	- " << goliath.getName() << std::endl << std::endl;

	std::cout << UNDER "Test constructor de copie" END << std::endl;
	FragTrap goliath_copie = goliath;
	std::cout << "goliath_copie name	- "
	<< goliath_copie.getName() << std::endl << std::endl;

	std::cout << UNDER "Test operateur d'affectation =" END << std::endl;
	std::cout << UNDER "New class" END << std::endl;
	FragTrap goliath_affectation("other Goliath");
	std::cout << "before goliath_affectation name '"
	<< goliath_affectation.getName() << "'" << std::endl;

	std::cout << UNDER "Affectation class" END << std::endl;
	goliath_affectation = goliath;
	std::cout << "after goliath_affectation name '"
	<< goliath_affectation.getName() << "'" << std::endl << std::endl << std::endl;



	std::cout << UNDER "David vs Goliath" END << std::endl
	<< david << std::endl 
	<< goliath << std::endl << std::endl;

	int	i = 1;
	while (david.getEnergy() > 0 || goliath.getEnergy() > 0)
	{
		std::cout << "------------- Tour " << i << " -------------" <<std::endl;
		if (david.getEnergy() > 0)
		{
			david.attack("goliath");
			goliath.takeDamage(david.getDamage());
			if (goliath.getHit() <= 0) break;
		}
		if (goliath.getHit() < 60)
		goliath.beRepaired(1);
		
		
		if (goliath.getEnergy() > 0)
		{
			goliath.attack("david");
			david.takeDamage(goliath.getDamage());
			if (david.getHit() <= 0 ) break;
		}
		if (david.getHit() < 60)
			david.beRepaired(1);

		if (i % 5 == 0)
			david.guardGate();


		i++;
	}

	if (david.getHit() <= 0)
		std::cout << "david is dead, who doubted it?" << std::endl;
	else if (goliath.getHit() <= 0)
		std::cout << "goliath is dead, really ? it's real life here..." << std::endl;
	else 
	{
		std::cout << "No energy : les 2 combattant se regarde dans le blanc des yeux pendant plusieurs minutes..." << std::endl
		<< "goliath " << goliath.getHit() 
		<< " hp vs "
		<< "david " << david.getHit() << " hp"
		<< std::endl;

		if (goliath.getHit() > david.getHit())
			std::cout << "david en difficulte" << std::endl;
		else
			std::cout << "goliath en difficulte" << std::endl;
	}
	std::cout << std::endl << std::endl;
	*/

	return (0);
}