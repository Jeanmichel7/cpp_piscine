/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:58:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/30 21:00:37 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Fixed		a(2.2F);
	Fixed 		e(10.123F);
	std::cout <<"e avant l'operateur d'affectation :	" << e << std::endl;
	e = a;
	std::cout <<"e apres l'operateur d'affectation :	" << e << std::endl << std::endl;


	Point p1(10.1F, 123.1F);
	p1.display();

	return 0;
}