/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:57 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/01 03:27:46 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdio.h>

/* CONSTRUCTOR */
Fixed::Fixed() : _value(0)
{
	return;
}
Fixed::Fixed(const int cst_int)
{
	this->setRawBits(cst_int << _nb_fractionnaire);
	return;
}
Fixed::Fixed(const float cst_float)
{
	this->setRawBits(roundf(cst_float * 256));
	return;
}
Fixed::~Fixed()
{
	return;
}
Fixed::Fixed(const Fixed &copie) : _value(copie._value)
{
	return;
}




/* SURCHARGE OPERTEUR */
Fixed &Fixed::operator=(const Fixed &n)
{
	//this->_value = n.getRawBits();
	this->setRawBits(n.getRawBits());
	return (*this);
}
bool Fixed::operator >(Fixed const &n) const
{
	if (_value > n.getRawBits())
		return (1);
	else
		return (0);
}
bool Fixed::operator <(Fixed const &n) const
{
	if (_value < n.getRawBits())
		return (1);
	else
		return (0);
}
bool Fixed::operator >=(Fixed const &n) const
{
	if (_value >= n.getRawBits())
		return (1);
	else
		return (0);
}
bool Fixed::operator <=(Fixed const &n) const
{
	if (_value <= n.getRawBits())
		return (1);
	else
		return (0);
}
bool Fixed::operator ==(Fixed const &n) const
{
	if (_value == n.getRawBits())
		return (1);
	else
		return (0);
}
bool Fixed::operator !=(Fixed const &n) const
{
	if (_value != n.getRawBits())
		return (1);
	else
		return (0);
}
Fixed Fixed::operator+(Fixed n) const
{
	Fixed newe;

	newe._value = this->_value + n.getRawBits();
	return (newe);
}
Fixed Fixed::operator-(Fixed n) const
{
	Fixed newe;

	newe._value = this->_value - n.getRawBits();
	return (newe);
}
Fixed Fixed::operator*(Fixed n) const
{
	Fixed newe;

	newe._value = ((this->_value * n.getRawBits()) / 256);
	return (newe);
}
Fixed Fixed::operator/(Fixed n) const
{
	Fixed newe;

	newe._value = (
		((this->_value * 256)
		/
		(n.getRawBits() * 256))
		* 256
	);
	return (newe);
}


/* INCREMENTATION DECREMEMTAION */

Fixed	&Fixed::operator ++()
{
	_value++;
	return (*this);
}
Fixed	Fixed::operator ++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}


/* FCT OPERTEUR SURCHARGE */
Fixed	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1.getRawBits() <= ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}
Fixed	Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.getRawBits() <= ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}
Fixed	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1.getRawBits() >= ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}
Fixed	Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.getRawBits() >= ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}



int bit_is_one(size_t const size, void const *const ptr, int search_index)
{
	unsigned char *b = (unsigned char *)ptr;
	unsigned char byte;
	int i, j;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			byte = (b[i] >> j) & 1;
			if (i == 0 && j == search_index && byte == 1)
				return (1);
		}
	}
	return (0);
}



/* FCT MEMBRE */
int Fixed::getRawBits(void) const
{
	return (_value);
}
void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
int Fixed::toInt(void) const
{
	int		temp;

	temp = getRawBits();
	for(int i = 0; i < 8; i++)
		temp >>= 1;
	return (temp);
}
float Fixed::toFloat(void) const
{
	int 	decimal_value;
	float	fraction_value = 1;
	float	virgul_value;
	int		temp;
	int		temp2;

	temp = getRawBits();
	temp2 = getRawBits();

	for(int i = 0; i < 8; i++)
		temp >>= 1;
	decimal_value = temp;
	virgul_value = decimal_value;
	for(int i = 7; i >= 0; i--)
	{
		fraction_value /= 2;
		if (bit_is_one(sizeof(temp2), &temp2, i))
			virgul_value += fraction_value;
	}
	return virgul_value;
}



std::ostream &operator<<(std::ostream &cout, const Fixed &instance)
{
	cout << instance.toFloat();
	return cout;
}
