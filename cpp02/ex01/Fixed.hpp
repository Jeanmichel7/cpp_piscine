/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/25 01:22:02 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_nb_fractionnaire = 8;
public:
	Fixed();
	Fixed(const int cst_int);
	Fixed(const float cst_float);
	Fixed(const Fixed &copie);
	~Fixed();
	
	//Fixed &operator=(Fixed &ref_class);
	Fixed &operator=(const float cst_float);
	
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &blabla, const Fixed &instance);

#endif