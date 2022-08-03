/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:05:48 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:40:18 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP__
# define __FRAG_TRAP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap( void );
	FragTrap( std::string const name );
	FragTrap( FragTrap const &tmp );
	FragTrap &operator= ( FragTrap const &tmp );
	~FragTrap();
};






#endif