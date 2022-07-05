/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:36 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 15:19:02 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	this->_name = name;
	return;
}

Zombie::~Zombie( void ) {
	std::cout << "destrcutor : " << this->_name << std::endl;
	return;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ":: BraiiiiiiinnnzzzZ..." << std::endl;
}
