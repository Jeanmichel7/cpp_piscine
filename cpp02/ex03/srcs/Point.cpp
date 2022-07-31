/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:54 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/31 02:22:48 by jrasser          ###   ########.fr       */
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

Fixed	Point::getX() const { return (_x); }
Fixed	Point::getY() const { return (_y); }

void	Point::display() const
{
	std::cout << "Pos(" 
	<< _x.toFloat() << ", "
	<< _y.toFloat() << ")"
	<< std::endl; 
}

bool bsp( Point const A, Point const B, Point const C, Point const P)
{
	// calc les 3 droites
	//ft_set_line_fct(A);

	//std::cout << "test de modif : " << A.getPente() << std::endl;

	// pour chque droite
		// (AB) compare demi-plan de C == demi-plan de P

	//if (ft_check_same_plan(A, B, C, P))
	//	return (1);
	//else
	//	return (0);
}
