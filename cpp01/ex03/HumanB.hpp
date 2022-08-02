/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:46:01 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 21:51:46 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{

private:
	std::string 	_name;
	Weapon 			*_humanBWeapon;
	
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();

};

#endif