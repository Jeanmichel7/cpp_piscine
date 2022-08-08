/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:49:43 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/08 22:16:54 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA__
# define __DATA__

#include <stdint.h>
#include <iostream>
#include <stdio.h>

class Data
{
private:
	int		_i;
	char 	_c;

public:
	Data();
	~Data();
	Data(Data const &);
	void operator=(Data const &);

	int 	getInt();
	char	getChar();
};

std::ostream &operator<<(std::ostream &cout, Data &instance);

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif