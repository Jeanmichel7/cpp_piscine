/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:57 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/24 22:26:27 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cstdio>
#include <limits.h>
#define FIX_MAX SHRT_MAX

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
	puts("");
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

	std::cout << "Int cst:	" << cst_int << std::endl;
	printBits(sizeof(cst_int), &cst_int);

	this->setRawBits(cst_int << _nb_fractionnaire);
	return;
}

Fixed::Fixed(const float cst_float)
{
	std::cout << "Float construcotr called" << std::endl;

	std::cout << "float :	" << cst_float << std::endl;
	printBits(sizeof(cst_float), &cst_float);

	// conv en int
	float temp = cst_float;
	int *cast = reinterpret_cast<int *>(&temp);
	std::cout << "int :	" << *cast << std::endl;
	printBits(sizeof(*cast), cast);



	int b;
	b = cst_float * 256;
	b = roundf(b);

	std::cout << "new int test:	" << b << std::endl;
	printBits(sizeof(b), &b);


/*
	float new_float;
	new_float = static_cast<float>(*cast);
	std::cout << "new_float :	" << new_float << std::endl;
	printBits(sizeof(new_float), &new_float);
*/

/*
	int	cast2 = static_cast<int>(temp);
	std::cout << "temp2 :	";
	printBits(sizeof(cast2), &cast2);
*/


/*
	unsigned sign = x < 0;
	unsigned absx = ((unsigned)x ^ -sign) + sign; // safe abs(x)
	unsigned tmp = absx, manbits = 0;
	int exp = 0, truncated = 0;
	// calculate the number of bits needed for the mantissa
	while (tmp)
	{
		tmp >>= 1;
		manbits++;
	}
	// half-precision floats have 11 bits in the mantissa.
	// truncate the excess or insert the lacking 0s until there are 11.
	if (manbits)
	{
		exp = 10; // exp bias because 1.0 is at bit position 10
		while (manbits > 11)
		{
			truncated |= absx & 1;
			absx >>= 1;
			manbits--;
			exp++;
		}
		while (manbits < 11)
		{
			absx <<= 1;
			manbits++;
			exp--;
		}
	}
	if (exp + truncated > 15)
	{
		// absx was too big, force it to +/- infinity
		exp = 31; // special infinity value
		absx = 0;
	}
	else if (manbits)
	{
		// normal case, absx > 0
		exp += 15; // bias the exponent
	}
	return (sign << 15) | ((unsigned)exp << 10) | (absx & ((1u << 10) - 1));
*/


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
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat(void) const
{

/*
	int new_int;
	new_int = cst_float / (FIX_MAX+1.0);

	std::cout << "new_int :	" << new_int << std::endl;
	printBits(sizeof(new_int), &new_int);
*/
	float *cast = reinterpret_cast<float *>(getRawBits());
	return (*cast);
}

int Fixed::toInt(void) const
{
	int cast = getRawBits();
	return (cast);
}

/* surcharge opérateur d'insertion */
std::ostream &operator<<(std::ostream &blabla, const Fixed &instance)
{
/*
	float *new_float;

	new_float = reinterpret_cast<float*>(instance.getRawBits());
	blabla << &(*new_float);
*/
	int 	decimal_value;
	float	fraction_value = 1;
	float	virgul_value;
	int		temp;
	int		temp2;

	temp = instance.getRawBits();
	temp2 = instance.getRawBits();

	for(int i = 0; i < 8; i++)
	{
		//std::cout << "temp : " << temp << std::endl;
		//printBits(sizeof(temp), &temp);
		temp >>= 1;
	}
	decimal_value = temp;
	//std::cout << "decimal : " << decimal_value << std::endl;
	//printBits(sizeof(decimal_value), &decimal_value);
	//std::cout << std::endl;



	virgul_value = decimal_value;

	for(int i = 7; i >= 0; i--)
	{
		//std::cout << "temp2 : " << temp2 << std::endl;
		//printBits(sizeof(temp2), &temp2);
		//std::cout << "virgul value : " << virgul_value << std::endl;
		//printBits(sizeof(virgul_value), &virgul_value);


		fraction_value /= 2;

		if (bit_is_one(sizeof(temp2), &temp2, i))
		{
			virgul_value += fraction_value;
			//printf("il vaux 1 en %d!\n", i);
		}


		//std::cout << std::endl << std::endl;

		
	}

	
	//std::cout << "temp2 : " << temp2 << std::endl;
	//printBits(sizeof(temp2), &temp2);
	//std::cout << "virgul value : " << virgul_value << std::endl;
	//printBits(sizeof(virgul_value), &virgul_value);

	blabla << virgul_value;
	return blabla;
}