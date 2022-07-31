/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:58:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/01 00:04:30 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{

	Point A(1, 1);
	Point B(5, 1.5F);
	Point C(3, 5);
	
	Point p1(5.1, 1.5);
	std::cout
	<< "A" << A << std::endl
	<< "B" << B << std::endl
	<< "C" << C << std::endl
	<< "P" << p1
	<< (bsp(A, B, C, p1) ? " est " : " n'est pas ")
	<< "dans le triangle" << std::endl << std::endl;





	Point D(3, 1);
	Point E(6, 1);
	Point F(1, 3);

	Point p2(3, 2);
	std::cout
	<< "A" << D << std::endl
	<< "B" << E << std::endl
	<< "C" << F << std::endl
	<< "P" << p2
	<< (bsp(D, E, F, p2) ? " est " : " n'est pas ")
	<< "dans le triangle" << std::endl << std::endl;




	Point G(1, 1);
	Point H(3, 1);
	Point I(1, 3);

	Point p3(1.5F, 1.5);
	std::cout
	<< "A" << G << std::endl
	<< "B" << H << std::endl
	<< "C" << I << std::endl
	<< "P" << p2
	<< (bsp(G, H, I, p3) ? " est " : " n'est pas ")
	<< "dans le triangle" << std::endl << std::endl;

	return 0;
}