/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:58:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/28 02:34:49 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a(2);
	Fixed		b(42.42F);
	Fixed		c(2.0F);
	Fixed const	d(Fixed(5.05f) * Fixed(2));

	Fixed const		A(20);
	Fixed const		B(424.2F);


	std::cout <<"A :	" << a << std::endl;
	std::cout <<"B :	" << b << std::endl;
	std::cout <<"C :	" << c << std::endl << std::endl;

	std::cout << "Operateur >" << std::endl;
	std::cout << "operteur a > b : " << a.operator>(b) << std::endl;
	std::cout << "operteur b > a : " << b.operator>(a) << std::endl << std::endl;

	std::cout << "Operateur <" << std::endl;
	std::cout << "operteur a < b : " << a.operator<(b) << std::endl;
	std::cout << "operteur b < a : " << b.operator<(a) << std::endl << std::endl;

	std::cout << "Operateur <=" << std::endl;
	std::cout << "operteur a <= b : " << a.operator<=(b) << std::endl;
	std::cout << "operteur a <= c : " << a.operator<=(c) << std::endl << std::endl;

	std::cout << "Operateur >=" << std::endl;
	std::cout << "operteur a >= b : " << a.operator>=(b) << std::endl;
	std::cout << "operteur a >= c : " << a.operator>=(c) << std::endl << std::endl;

	std::cout << "Operateur ==" << std::endl;
	std::cout << "operteur a == b : " << a.operator==(b) << std::endl;
	std::cout << "operteur a == c : " << a.operator==(c) << std::endl << std::endl;

	std::cout << "Operateur !=" << std::endl;
	std::cout << "operteur a != b : " << a.operator!=(b) << std::endl;
	std::cout << "operteur a != c : " << a.operator!=(c) << std::endl << std::endl;

	std::cout << "Operateur +" << std::endl;
	std::cout << "operteur a + b : " << a.operator+(b) << std::endl;
	std::cout << "operteur a + c : " << a.operator+(c) << std::endl << std::endl;

	std::cout << "Operateur -" << std::endl;
	std::cout << "operteur a - b : " << a.operator-(b) << std::endl;
	std::cout << "operteur a - c : " << a.operator-(c) << std::endl << std::endl;

	std::cout << "Operateur *" << std::endl;
	std::cout << "operteur a * b : " << a.operator*(b) << std::endl;
	std::cout << "operteur a * c : " << a.operator*(c) << std::endl << std::endl;

	std::cout << "Operateur /" << std::endl;
	std::cout << "operteur a / b : " << a.operator/(b) << std::endl;
	std::cout << "operteur b / c : " << a.operator/(c) << std::endl << std::endl << std::endl;

	std::cout << "Function min - max" << std::endl;
	std::cout << "Min is : " << Fixed::min(a, b) << std::endl;
	std::cout << "Max is : " << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "Function min - max CONST" << std::endl;
	std::cout << "Min is : " << Fixed::min(A, B) << std::endl;
	std::cout << "Max is : " << Fixed::max(A, B) << std::endl << std::endl;



	std::cout << "INCREMENT (exemple du sujet)" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << d << std::endl;
	std::cout << Fixed::max( a, d ) << std::endl;


	return 0;
}