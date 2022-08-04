/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:25 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 17:27:29 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	fct_extern(Zombie *zombie) {
	zombie->announce();
}


int main() {
	Zombie	instance("Zombie");

	instance.randomChump("Zombie_random");
	Zombie *new_zombie = instance.newZombie("newZombie");
	fct_extern(new_zombie);

	delete new_zombie;
	return 0;
}