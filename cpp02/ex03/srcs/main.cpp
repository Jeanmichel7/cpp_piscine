/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:58:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:07:56 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(2.1F, 1.9F);
	Point B(14.9F, 3.25F);
	Point C(10.2, 17.1);
	
	Point p1(5.1, 2.5);
	std::cout << "----------------------------------" << std::endl
	<< "A" << A << std::endl
	<< "B" << B << std::endl
	<< "C" << C << std::endl
	<< "P" << p1 << std::endl
	<< (bsp(A, B, C, p1) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(A, B, C, p1);

	Point p2(5.1, 12.5);
	std::cout << "----------------------------------" << std::endl
	<< "A" << A << std::endl
	<< "B" << B << std::endl
	<< "C" << C << std::endl
	<< "P" << p2 << std::endl
	<< (bsp(A, B, C, p2) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(A, B, C, p2);




	/* Triangle 2 */

	Point D(8, 2);
	Point E(18, 2);
	Point F(3, 15);

	Point p10(4, 3);
	std::cout << "----------------------------------" << std::endl
	<< "A" << D << std::endl
	<< "B" << E << std::endl
	<< "C" << F << std::endl
	<< "P" << p10 << std::endl
	<< (bsp(D, E, F, p10) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(D, E, F, p10);


	Point p11(10, 5);
	std::cout << "----------------------------------" << std::endl
	<< "A" << D << std::endl
	<< "B" << E << std::endl
	<< "C" << F << std::endl
	<< "P" << p11 << std::endl
	<< (bsp(D, E, F, p11) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(D, E, F, p11);



	/* Triangle 3 */

	Point G(2, 18);
	Point H(18, 18);
	Point I(10, 2);

	Point p100(10, 10);
	std::cout << "----------------------------------" << std::endl
	<< "A" << G << std::endl
	<< "B" << H << std::endl
	<< "C" << I << std::endl
	<< "P" << p100 << std::endl
	<< (bsp(G, H, I, p100) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(G, H, I, p100);

	Point p101(5, 7);
	std::cout << "----------------------------------" << std::endl
	<< "A" << G << std::endl
	<< "B" << H << std::endl
	<< "C" << I << std::endl
	<< "P" << p101 << std::endl
	<< (bsp(G, H, I, p101) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(G, H, I, p101);

	Point p102(10, 18);
	std::cout << "----------------------------------" << std::endl
	<< "A" << G << std::endl
	<< "B" << H << std::endl
	<< "C" << I << std::endl
	<< "P" << p102 << std::endl
	<< (bsp(G, H, I, p102) ? "\e[0;32mEst\e[0m " : "\e[0;31mN'est pas\e[0m ")
	<< "dans le triangle" << std::endl << std::endl;
	display_triangle(G, H, I, p102);

	return 0;
}
