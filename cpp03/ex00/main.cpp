/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:21:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/01 19:36:31 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	int	i = 1;
	ClapTrap David("David");
	ClapTrap Goliath("Goliath");

	/* test copie/ effectation
	* ClapTrap ct_copie = ct1;
	* ClapTrap ct_affectation("Other name");
	* std::cout << "ct 1 name " << ct1.getName() << std::endl;
	* std::cout << "ct_copie name " << ct_copie.getName() << std::endl;
	* std::cout << "before ct_affectation name " << ct_affectation.getName() << std::endl;
	* ct_affectation = ct1;
	* std::cout << "after ct_affectation name " << ct_affectation.getName() << std::endl;
	* */

	David.setDamage(1);
	Goliath.setDamage(2);

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
		if (Goliath.getHit() < 6)
		Goliath.beRepaired(1);
		
		
		if (Goliath.getEnergy() > 0)
		{
			Goliath.attack("David");
			David.takeDamage(Goliath.getDamage());
			if (David.getHit() <= 0 ) break;
		}
		if (David.getHit() < 6)
			David.beRepaired(1);

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