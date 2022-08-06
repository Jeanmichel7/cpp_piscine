/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:19:58 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 02:45:43 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

#include <iostream>
#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Characterinterface.hpp"
#include "Character.hpp"
#include "Materiasourceinterface.hpp"
#include "Materiasource.hpp"

class Cure : public AMateria
{
private:
	std::string	_type;

public:
	Cure();
	Cure(Cure const &);
	~Cure();
	void operator =(Cure const &);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif