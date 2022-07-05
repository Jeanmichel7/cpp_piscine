/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:37:45 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 22:02:20 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	//std::cout << "construct" << this->_name << std::endl;
	return;
}

Zombie::~Zombie( void ) {
	//std::cout << "destructor : " << this->_name << std::endl;
	return;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ":: BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}

std::string	Zombie::getName( void ) {
	return (this->_name);
}

Zombie* Zombie::zombieHorde( int N, std::string name ) {

	Zombie	*tab_zombies = 0;
	int 	i;

	tab_zombies = new Zombie[N];
	for(i = 0; i < N; i++) {
		tab_zombies[i].setName(name);
	}
	return (tab_zombies);
}
