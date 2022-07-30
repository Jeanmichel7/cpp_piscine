/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:54 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/30 22:09:04 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	_x = Fixed(0);
	_y = Fixed(0);
	return;
}

Point::Point(float px, float py)
{
	_x = Fixed(px);
	_y = Fixed(py);
	return;
}

Point::Point(const Point &copie)
{
	_x = copie._x;
	_y = copie._y;
	return ;
}

Point::~Point() { return; }

/*
Point &Point::operator= ( const Point &n ) const;
{
 
}
*/


void	Point::display() const
{
	std::cout << "Pos(" << _x.toFloat() << ")"; 
}


Fixed	Point::getX() { return (_x); }
Fixed	Point::getY() { return (_y); }
void	Point::setX( const float x ) { _x = Fixed(x); }
void	Point::setY( const float y ) { _y = Fixed(y); }

