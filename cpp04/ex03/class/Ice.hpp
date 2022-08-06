/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:19:18 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 04:56:03 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

#include <iostream>
#include "Amateria.hpp"
#include "Characterinterface.hpp"

class Ice : public AMateria
{
private:
	std::string	_type;

public:
	Ice();
	Ice(Ice const &);
	~Ice();
	void operator =(Ice const &);

	AMateria *clone() const;
	void use(ICharacter &target);

};

#endif