/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 02:55:16 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SRC_HPP__
# define __MATERIA_SRC_HPP__

#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Characterinterface.hpp"
#include "Character.hpp"
#include "Materiasourceinterface.hpp"
#include "Materiasource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_m_tmp;

public:
	MateriaSource();

	
	virtual ~MateriaSource() {}
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

};



#endif