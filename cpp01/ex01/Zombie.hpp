/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:37:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 21:38:18 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstddef>

class Zombie {

public:
	Zombie( void );
	~Zombie( void );
	void		announce( void );
	void		setName(std::string name);
	std::string	getName( void );
	Zombie		*zombieHorde( int N, std::string name );

private:
	std::string _name;
	
};

#endif
