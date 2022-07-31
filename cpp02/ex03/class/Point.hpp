/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:50 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/31 02:19:10 by jrasser          ###   ########.fr       */
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

	Fixed	getX() const;
	Fixed	getY() const;
	void	display() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif