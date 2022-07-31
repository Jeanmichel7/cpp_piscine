/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:58:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/31 00:14:57 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{

	Point A(0, 0);
	Point B(2.5, 0);
	Point C(0, 2.5F);
	B.display();

	Point p1(1, 1);

	std::cout << (bsp(A, B, C, p1) ? "oui" : "non") << std::endl;

	return 0;
}