/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:56:16 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:11:04 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	check_bord(int j, int i, Point const P1, Point const P2)
{
	if (P1.getX() <= P2.getX())
	{
		if (P1.getY() <= P2.getY())
		{
			if (j >= P1.getX() && j <= P2.getX() && i >= P1.getY() && i <= P2.getY())
				return (1);
		}
		else if (P2.getY() < P1.getY())
		{
			if (j  >= P1.getX() && j  <= P2.getX() && i >= P2.getY() && i <= P1.getY())
				return (1);
		}
	}
	else if (P1.getX() > P2.getX())
	{
		if (P1.getY() <= P2.getY())
		{
			if (j  >= P2.getX() && j  <= P1.getX() && i >= P1.getY() && i <= P2.getY())
				return (1);
		}
		else if (P2.getY() < P1.getY())
		{
			if (j  >= P2.getX() && j  <= P1.getX() && i >= P2.getY() && i <= P1.getY())
				return (1);
		}
	}
	return (0);
}

int	check_is_on_diag(int i, int j, float pente, float b)
{
	int n = i - ((round((pente)) * j) + round(b));

	if (n == 0)
		return (1);
	else
		return (0);
}

int	is_on_diagonal(Point const A, Point const B, Point const C, int i, int j)
{
	float	pente_line1;	//(AB)
	float	b_line1;
	float	pente_line2;	//(AC)
	float	b_line2;
	float	pente_line3;	//(BC)
	float	b_line3;

	pente_line1 = 	set_coef(A, B);
	b_line1 = 		A.getY() - (pente_line1 * A.getX());
	pente_line2 = 	set_coef(A, C);
	b_line2 = 		A.getY() - (pente_line2 * A.getX());
	pente_line3 = 	set_coef(B, C);
	b_line3 = 		B.getY() - (pente_line3 * B.getX());

	if ((check_is_on_diag(i, j, pente_line1, b_line1)
		&& check_bord(j, i, A, B))
	|| (check_is_on_diag(i, j, pente_line2, b_line2)
		&& check_bord(j, i, A, C))
	|| (check_is_on_diag(i, j, pente_line3, b_line3)
		&& check_bord(j, i, B, C)))
		return(1);
	else
		return (0);
}

void	display_triangle(Point const A, Point const B, Point const C,
Point const P)
{
	for(int i = 20; i >= 0; i--)
	{
		for(int j = 0; j <= 20; j++)
		{
			if (i == 20 && j == 0)
				std::cout << "^";
			else if (i == 0 && j == 20)
				std::cout << ">";
			else if (j == 0)
				std::cout << "|";
			else if (i == 0)
				std::cout << "---";
			else if (i == round(A.getY()) && j == round(A.getX()))
				std::cout << " A ";
			else if (i == round(B.getY()) && j == round(B.getX()))
				std::cout << " B ";
			else if (i == round(C.getY()) && j == round(C.getX()))
				std::cout << " C ";
			else if (i == round(P.getY()) && j == round(P.getX()))
				std::cout << " P ";
			else if (is_on_diagonal(A, B, C, i, j))
				std::cout << " - ";
			else
				std::cout << "   ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
}
