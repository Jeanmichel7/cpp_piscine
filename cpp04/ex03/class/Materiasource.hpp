/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 07:43:52 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SRC_HPP__
# define __MATERIA_SRC_HPP__

#include "Amateria.hpp"
#include "Materiasourceinterface.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//class Ice;
//class Cure;

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *_m_tmp[4];

public:
	MateriaSource();
	MateriaSource( MateriaSource const & );
	void operator = ( MateriaSource const & );
	virtual ~MateriaSource();
	
	void 		learnMateria( AMateria* );
	AMateria*	createMateria( std::string const & type );

};



#endif