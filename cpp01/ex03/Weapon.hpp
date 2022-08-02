/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:51 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 22:16:30 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string weapon_name);
	~Weapon();

	const std::string	getType();
	void				setType(std::string weapon_name);
};




#endif