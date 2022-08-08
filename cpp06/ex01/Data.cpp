/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:49:46 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/08 22:14:28 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

Data::Data() : _i(100), _c('Z') { return; }
Data::~Data() { return; }
Data::Data(Data const &tmp) : _i(tmp._i), _c(tmp._c) { return; }
void	Data::operator = (Data const &tmp)
{
	_i = tmp._i;
	_c = tmp._c;
}


int		Data::getInt() { return(_i); }
char 	Data::getChar() { return (_c); }



std::ostream &operator<<(std::ostream &cout, Data &instance)
{
	cout << "Data : " << std::endl
		 << "contenu int : " << instance.getInt() << std::endl
		 << "contenu char : " << instance.getChar()
		 << std::endl;
	return (cout);
}
