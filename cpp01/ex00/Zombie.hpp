/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:33 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 17:19:33 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );

private:
	std::string _name;
	
};

#endif