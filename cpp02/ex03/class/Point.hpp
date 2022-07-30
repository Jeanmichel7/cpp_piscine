/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:01:50 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/30 20:51:44 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;

public:
	Point();
	Point(float x, float y);
	Point(const Point &copie);
	~Point();
	
	Point &operator = ( const Point &n ) const;

	Fixed	getX();
	Fixed	getY();
	void	setX(const float x);
	void	setY(const float y);


	bool bsp( Point const a, Point const b, Point const c, Point const point);
	void	display() const;

};


#endif