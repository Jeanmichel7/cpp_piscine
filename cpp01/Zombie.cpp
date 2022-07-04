/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:36 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/04 23:33:18 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie::Zombie( void ) {
	return;
}
Zombie::~Zombie( void ) {
	return;
}
//Foo: BraiiiiiiinnnzzzZ...
void	Zombie::announce( void ) {
	std::cout << std::endl; 
}

Zombie*	newZombie( std::string name ) {

	Zombie *new_zombie = new Zombie;

	new_zombie->_name = name;

	return (new_zombie);
}
