/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:01:01 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 06:16:45 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

#include <iostream>
#include "Amateria.hpp"
#include "Characterinterface.hpp"

class Character : public ICharacter
{

	std::string		_name;
	AMateria	*_item[4];
	AMateria	*_trash[4];

public:
	Character();
	Character(std::string name);
	Character(Character const &);
	void	operator= (Character const &);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
 