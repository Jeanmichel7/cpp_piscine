/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:57 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/24 22:36:40 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
			//printf("test : i : %d, j : %d, char : %u\n", i, j, byte);
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

	//std::cout << "Int cst:	" << cst_int << std::endl;
	//printBits(sizeof(cst_int), &cst_int);

	this->setRawBits(cst_int << _nb_fractionnaire);
	return;
}

Fixed::Fixed(const float cst_float)
{
	std::cout << "Float construcotr called" << std::endl;

	//std::cout << "float :	" << cst_float << std::endl;
	//printBits(sizeof(cst_float), &cst_float);

	// conv en int
	//float temp = cst_float;
	//int *cast = reinterpret_cast<int *>(&temp);
	//std::cout << "int :	" << *cast << std::endl;
	//printBits(sizeof(*cast), cast);

	int b;
	b = cst_float * 256;
	b = roundf(b);

	//std::cout << "new int test:	" << b << std::endl;
	//printBits(sizeof(b), &b);

	this->setRawBits(b);
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &copie) : _value(copie._value)
{
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed &ref_class)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = ref_class._value;
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

int Fixed::toInt(void) const
{
	int		temp;

	temp = getRawBits();
	for(int i = 0; i < 8; i++)
		temp >>= 1;
	return (temp);
}

std::ostream &operator<<(std::ostream &cout, const Fixed &instance)
{
	cout << instance.toFloat();
	return cout;
}