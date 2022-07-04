/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:43:33 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/04 23:32:53 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );

private:
	std::string _name;
	
};

#endif