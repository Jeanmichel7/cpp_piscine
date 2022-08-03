/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:54 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:05:53 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{
	return;
}

Point::Point(float px, float py) : _x(Fixed(px)), _y(Fixed(py))
{
	return;
}

Point::Point(const Point &copie) : _x(copie._x), _y(copie._y)
{
	return ;
}

Point::~Point() { return; }


Point &Point::operator = ( Point const &rhs )
{
	const_cast<Fixed&>(_x) = rhs._x;
	const_cast<Fixed&>(_y) = rhs._y;
	return (*this);
}

float	Point::getX() const { return (_x.toFloat()); }
float	Point::getY() const { return (_y.toFloat()); }

int	get_plan(Point P, float pente, float b)
{
	float n = P.getY() - (((pente) * P.getX()) + b);

	if (n > (float)0)
		return (1);
	else if (n < (float)0)
		return (-1);
	else
		return (0);
}

float	set_coef(Point const A, Point const B)
{
	float coef;

	if (A.getY() < B.getY())
		coef = (A.getY() - B.getY()) / (A.getX() - B.getX());
	else if (A.getY() > B.getY())
		coef = (B.getY() - A.getY()) / (B.getX() - A.getX());
	else
		coef = 0;
	return (coef);
}

bool bsp( Point const A, Point const B, Point const C, Point const P)
{
	float	pente_line1;	//(AB)
	float	b_line1;
	float	pente_line2;	//(AC)
	float	b_line2;
	float	pente_line3;	//(BC)
	float	b_line3;

	// calc les 3 fcts de droites
	pente_line1 = 	set_coef(A, B);
	b_line1 = 		A.getY() - (pente_line1 * A.getX());

	pente_line2 = 	set_coef(A, C);
	b_line2 = 		A.getY() - (pente_line2 * A.getX());

	pente_line3 = 	set_coef(B, C);
	b_line3 = 		C.getY() - (pente_line3 * C.getX());

	// verif point on line
	if ((get_plan(P, pente_line1, b_line1) == 0)
	|| (get_plan(P, pente_line2, b_line2) == 0)
	|| (get_plan(P, pente_line3, b_line3) == 0))
	{
		std::cout << "Sur une droite, ";
		return (false);
	}

	//pour chqaue droite cmpare le demi plan de P avec le demi plan au sommet oppose
	if (get_plan(P, pente_line1, b_line1) == get_plan(C, pente_line1, b_line1)
	&& get_plan(P, pente_line2, b_line2) == get_plan(B, pente_line2, b_line2)
	&& get_plan(P, pente_line3, b_line3) == get_plan(A, pente_line3, b_line3))
		return (true);
	else
		return (false);
}

std::ostream &operator<<(std::ostream &cout, const Point &inst)
{
	cout << "(	" 
	<< inst.getX() << ",	"
	<< inst.getY() << ")";
	return cout;
}
