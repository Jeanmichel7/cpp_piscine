/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:25 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 15:00:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	fct_extern(Zombie *zombie) {
	zombie->announce();
}

int main() {
	Zombie	instance("Zombie1");
	Zombie	*zombie1 = new Zombie("Zombie2");

	instance.randomChump("Zombie_random");
	fct_extern(zombie1);

	delete(zombie1);
	return 0;
}