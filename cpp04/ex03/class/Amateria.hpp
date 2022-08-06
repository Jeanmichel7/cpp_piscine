/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:59:48 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 05:32:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_HP__
# define __MATERIA_HP__

#include <iostream>
#include "Characterinterface.hpp"

class AMateria
{
protected:
	std::string		_type;

public :
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &);
	virtual ~AMateria();
	void operator =(AMateria const &);
	
	std::string const &getType() const; // Returns the AMateria type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif