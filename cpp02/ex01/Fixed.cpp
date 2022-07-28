/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:57 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/28 03:54:09 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdio.h>

/*
void printBits(size_t const size, void const *const ptr)
{
	unsigned char *b = (unsigned char *)ptr;
	unsigned char byte;
	int i, j;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
		}
	}
	puts("");
}
*/

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

/* CONSTRUCTOR */
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int cst_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(cst_int << _nb_fractionnaire);
	return;
}

Fixed::Fixed(const float cst_float)
{
	std::cout << "Float construcotr called" << std::endl;
	this->setRawBits(roundf(cst_float * 256));
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &copie)
{
	std::cout << "Copy constructor called" << std::endl;
	//_value = copie.getRawBits();
	this->operator=(copie);
	return;
}


Fixed &Fixed::operator=(Fixed const &ref_class)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = ref_class.getRawBits();
	return (*this);
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