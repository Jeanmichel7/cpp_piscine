/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:32:16 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 22:02:20 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie	*tab;
	Zombie	laHorde;
	int		taille;

	taille = 5;
	tab = laHorde.zombieHorde(taille, "blou");

	for(int i = 0; i < taille; i++) {
		tab[i].announce();
	}
	
	delete [] tab;
	return 0;
}