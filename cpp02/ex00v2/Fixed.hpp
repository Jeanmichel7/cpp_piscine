/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/24 05:06:54 by jrasser          ###   ########.fr       */
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
	Fixed(const Fixed &copie);
	~Fixed();
	
	Fixed &operator=(Fixed &ref_class);
	
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
};

#endif


00000111 01011011 11001101 00010101
00000000 00000001