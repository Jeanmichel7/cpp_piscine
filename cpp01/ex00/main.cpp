/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:25 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 13:26:27 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	fct_extern(Zombie *zombie) {
	zombie->announce();
}

int main() {
	Zombie	instance("blabla");
	Zombie	*zombie1 = new Zombie("herg");

	instance.randomChump("blassssla");
	fct_extern(zombie1);

	delete(zombie1);
	return 0;
}