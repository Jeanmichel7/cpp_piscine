/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:21:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/01 23:24:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#define UNDER "\e[4m"
#define END	"\e[0m"


int	main(void)
{
	std::cout << UNDER "Test constructor standard" END << std::endl;
	ScavTrap	scav("le scav");
	std::cout << "name	- " << scav.getName() << std::endl << std::endl;


	std::cout << UNDER "Test constructor de copie" END << std::endl;
	ScavTrap scav_copie = scav;
	std::cout << "scav_copie name	- "
	<< scav_copie.getName() << std::endl << std::endl;

	std::cout << UNDER "Test operateur d'affectation =" END << std::endl;

	std::cout << UNDER "New class" END << std::endl;
	ScavTrap scave_affectation("other scav");
	std::cout << "before scave_affectation name '"
	<< scave_affectation.getName() << "'" << std::endl;

	std::cout << UNDER "Affectation class" END << std::endl;
	scave_affectation = scav;
	std::cout << "after scave_affectation name '"
	<< scave_affectation.getName() << "'" << std::endl << std::endl;




	std::cout << UNDER "David vs Goliath with new class" END << std::endl;

	ScavTrap	David("David");
	ScavTrap 	Goliath("Goliath");
	int	i = 1;

	std::cout 
	<< David << std::endl 
	<< Goliath << std::endl << std::endl;

	while (David.getEnergy() > 0 || Goliath.getEnergy() > 0)
	{
		std::cout << "------------- Tour " << i << " -------------" <<std::endl;
		if (David.getEnergy() > 0)
		{
			David.attack("Goliath");
			Goliath.takeDamage(David.getDamage());
			if (Goliath.getHit() <= 0) break;
		}
		if (Goliath.getHit() < 60)
		Goliath.beRepaired(1);
		
		
		if (Goliath.getEnergy() > 0)
		{
			Goliath.attack("David");
			David.takeDamage(Goliath.getDamage());
			if (David.getHit() <= 0 ) break;
		}
		if (David.getHit() < 60)
			David.beRepaired(1);

		if (i % 5 == 0)
			David.guardGate();


		i++;
	}

	if (David.getHit() <= 0)
		std::cout << "David is dead, who doubted it?" << std::endl;
	else if (Goliath.getHit() <= 0)
		std::cout << "Goliath is dead, really ? it's real life here..." << std::endl;
	else 
	{
		std::cout << "No energy : les 2 combattant se regarde dans le blanc des yeux pendant plusieurs minutes..." << std::endl
		<< "Goliath " << Goliath.getHit() 
		<< " hp vs "
		<< "David " << David.getHit() << " hp"
		<< std::endl;

		if (Goliath.getHit() > David.getHit())
			std::cout << "David en difficulte" << std::endl;
		else
			std::cout << "Goliath en difficulte" << std::endl;
	}
	std::cout << std::endl << std::endl;


	return (0);
}