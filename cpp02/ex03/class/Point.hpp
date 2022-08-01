/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:50 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/01 03:26:51 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point();
	Point(float x, float y);
	Point(const Point &copie);
	~Point();
	Point &operator = ( const Point &rhs );

	float	getX() const;
	float	getY() const;
	
};

std::ostream	&operator<<(std::ostream &cout, const Point &instance);
bool			bsp( Point const a, Point const b, Point const c, Point const point);
float			set_coef(Point const A, Point const B);
void			display_triangle(Point const A, Point const B, Point const C, Point const P);

#endif