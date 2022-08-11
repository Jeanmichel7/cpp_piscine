/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:24:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 17:10:49 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"
#include <climits>


Convert::Convert() : _c(-1), _i(-1), _f(-1), _d(-1), _s("")
{ return; }
Convert::Convert(char const c) : _c(c),_i(-1), _f(-1), _d(-1), _s("")
{ return; }
Convert::Convert(int const i) : _c(-1), _i(i), _f(-1), _d(-1), _s("")
{ return; }
Convert::Convert(float const f) : _c(-1), _i(-1), _f(f), _d(-1), _s("")
{ return; }
Convert::Convert(double const d) : _c(-1), _i(-1), _f(-1), _d(d), _s("")
{ return; }
Convert::Convert(std::string s) : _c(-1), _i(-1), _f(-1), _d(-1), _s(s)
{ return; }
Convert::~Convert()
{ return; }
Convert::Convert(Convert const &tmp) : 
_c(tmp._c), _i(tmp._i), _f(tmp._f), _d(tmp._d), _s(tmp._s)
{ return; }

void	Convert::operator = (Convert const &tmp)
{
	const_cast<char&>(_c) = tmp._c;
	const_cast<int&>(_i) = tmp._i;
	const_cast<float&>(_f) = tmp._f;
	const_cast<double&>(_d) = tmp._d;
	const_cast<std::string&>(_s) = tmp._s;
	return;
}



/* FCT MEMBRE */
char		Convert::getChar()		{ return _c; }
int			Convert::getInt()		{ return _i; }
float		Convert::getFloat()		{ return _f; }
double		Convert::getDouble()	{ return _d; }



/*  OPERATOR  */
Convert::operator char()
{
	
	if (_c != -1)
		return _c;
	if (_i != -1)
	{
		char c  = static_cast<char>(_i);
		if (c > 31)
			return c;
		else
			return (-1);
	}
	if (_f != -1)
	{
		char c = static_cast<char>(_f);
		if (c > 31)
			return c;
		else
			return (-1);
	}
	if (_d != -1)
	{
		char c = static_cast<char>(_d);
		if (c > 31)
			return c;
		else
			return (-1);
	}
	return -1;
}

Convert::operator int()
{
	if (_c != -1)
		return reinterpret_cast<char>(_c);
	if (_i != -1)
	{
		if (_i < INT_MIN || _i > INT_MAX)
			return -1;
		return _i;
	}
	if (_f != -1)
	{
		if (_f < INT_MIN || _f > INT_MAX)
			return -1;
		return static_cast<int>(_f);
	}
	if (_d != -1)
	{
		if (_d < INT_MIN || _d > INT_MAX)
			return -1;
		return static_cast<int>(_d);
	}
	return -1;
}

Convert::operator float()
{
	if (_c != -1)
		return static_cast<char>(_c);
	if (_i != -1)
		return static_cast<float>(_i) ;
	if (_f != -1)
		return _f;
	if (_d != -1)
		return _d;
	
	return -1;
}

Convert::operator double()
{
	if (_c != -1)
		return static_cast<char>(_c);
	if (_i != -1)
		return static_cast<double>(_i);
	if (_f != -1)
		return _f;
	if (_d != -1)
		return _d;
	return -1;
}
