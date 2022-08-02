/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 02:01:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 16:54:22 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LINE_HPP
# define LINE_HPP

#include "Point.hpp"

class Line
{
private:
	Point const _p1;
	Point const _p2;
	Fixed const _pente;
	Fixed const _b;

	
public:

	

	Line(Point const p1, Point const p2);
	~Line();
};

#endif